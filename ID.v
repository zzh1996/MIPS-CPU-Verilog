`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:38:09 05/26/2016 
// Design Name: 
// Module Name:    ID 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ID(
	input clk,
	input rst_n,

	input [31:0]InstrD,
	input [31:0]PCPlus4D,

	input RegWriteW,
	input [31:0]ResultW,
	input [4:0]WriteRegW,
	input [31:0]ALUOutM,

	input ForwardAD,
	input ForwardBD,

	output [31:0]PCBranchD,
	output PCSrcD,

	output MemtoRegD,
	output MemWriteD,
	output BranchD,
	output ALUSrcD,
	output RegDstD,
	output RegWriteD,
	output [3:0]ALUControlD,
	output JumpD,
	output [31:0]RD1D,
	output [31:0]RD2D,
	output [4:0]RsD,
	output [4:0]RtD,
	output [4:0]RdD,
	output [31:0]SignImmD,
	output [2:0]LoadTypeD,
	output [1:0]SaveTypeD,
	output ALUASrcD,
	output [4:0]shamtD
    );

	wire [5:0]Op;
	wire [5:0]Funct;
	wire [4:0]A1;
	wire [4:0]A2;
	wire [4:0]A3;
	wire [31:0]WD3;
	wire WE3;
	wire [31:0]RD1;
	wire [31:0]RD2;
	wire [31:0]PCJumpD;
	wire [2:0]BranchOp;
	wire ConditionD;
	wire JumpRD;

	ControlUnit cu(Op,Funct,RtD,MemtoRegD,MemWriteD,BranchD,ALUSrcD,RegDstD,
		RegWriteD,ALUControlD,JumpD,BranchOp,JumpRD,LoadTypeD,SaveTypeD,ALUASrcD);
	REG_FILE rf(~clk,rst_n,A1,A2,A3,WD3,WE3,RD1,RD2);
	SignExtend se(InstrD[15:0],SignImmD);
	BranchUnit bu(RD1D,RD2D,BranchOp,ConditionD);

	assign Op=InstrD[31:26];
	assign Funct=InstrD[5:0];
	assign A1=InstrD[25:21];
	assign A2=InstrD[20:16];
	assign A3=WriteRegW;
	assign WD3=ResultW;
	assign WE3=RegWriteW;
	assign RsD=InstrD[25:21];
	assign RtD=InstrD[20:16];
	assign RdD=InstrD[15:11];
	assign shamtD=InstrD[10:6];
	assign PCJumpD=JumpRD?RD1D:{PCPlus4D[31:28],InstrD[25:0],2'b0};
	assign PCBranchD=JumpD?PCJumpD:PCPlus4D+(SignImmD<<2);
	assign PCSrcD=BranchD&ConditionD|JumpD;
	assign RD1D=ForwardAD?ALUOutM:RD1;
	assign RD2D=ForwardBD?ALUOutM:RD2;

endmodule
