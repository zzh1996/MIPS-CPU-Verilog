`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:41:25 05/26/2016 
// Design Name: 
// Module Name:    ID_EX 
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
module ID_EX(
	input clk,
	input rst_n,
	input clr,

	input RegWriteD,
	output reg RegWriteE,
	input MemtoRegD,
	output reg MemtoRegE,
	input MemWriteD,
	output reg MemWriteE,
	input [3:0]ALUControlD,
	output reg [3:0]ALUControlE,
	input ALUSrcD,
	output reg ALUSrcE,
	input RegDstD,
	output reg RegDstE,
	input [31:0]RD1D,
	output reg [31:0]RD1E,
	input [31:0]RD2D,
	output reg [31:0]RD2E,
	input [4:0]RsD,
	output reg [4:0]RsE,
	input [4:0]RtD,
	output reg [4:0]RtE,
	input [4:0]RdD,
	output reg [4:0]RdE,
	input [31:0]SignImmD,
	output reg [31:0]SignImmE,
	input [2:0]LoadTypeD,
	output reg [2:0]LoadTypeE,
	input [1:0]SaveTypeD,
	output reg [1:0]SaveTypeE,
	input ALUASrcD,
	output reg ALUASrcE,
	input [4:0]shamtD,
	output reg [4:0]shamtE
    );
	
	always @(posedge clk or negedge rst_n) begin
		if (~rst_n) begin
			RegWriteE<=0;
			MemtoRegE<=0;
			MemWriteE<=0;
			ALUControlE<=0;
			ALUSrcE<=0;
			RegDstE<=0;
			RD1E<=0;
			RD2E<=0;
			RsE<=0;
			RtE<=0;
			RdE<=0;
			SignImmE<=0;
			LoadTypeE<=0;
			SaveTypeE<=0;
			ALUASrcE<=0;
			shamtE<=0;
		end
		else if(clr) begin
			RegWriteE<=0;
			MemtoRegE<=0;
			MemWriteE<=0;
			ALUControlE<=0;
			ALUSrcE<=0;
			RegDstE<=0;
			RD1E<=0;
			RD2E<=0;
			RsE<=0;
			RtE<=0;
			RdE<=0;
			SignImmE<=0;
			LoadTypeE<=0;
			SaveTypeE<=0;
			ALUASrcE<=0;
			shamtE<=0;
		end
		else begin
			RegWriteE<=RegWriteD;
			MemtoRegE<=MemtoRegD;
			MemWriteE<=MemWriteD;
			ALUControlE<=ALUControlD;
			ALUSrcE<=ALUSrcD;
			RegDstE<=RegDstD;
			RD1E<=RD1D;
			RD2E<=RD2D;
			RsE<=RsD;
			RtE<=RtD;
			RdE<=RdD;
			SignImmE<=SignImmD;
			LoadTypeE<=LoadTypeD;
			SaveTypeE<=SaveTypeD;
			ALUASrcE<=ALUASrcD;
			shamtE<=shamtD;
		end
	end
endmodule
