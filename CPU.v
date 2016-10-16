`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:11:20 04/25/2016 
// Design Name: 
// Module Name:    CPU 
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
module CPU(
	input clk,
	input rst_n,
	input [7:0]sw,
	input [3:0]btn,
	output [15:0]seg,
	output [7:0]led
	);

	wire [1:0]ForwardAE;
	wire [1:0]ForwardBE;
	wire [3:0]ALUControlD;
	wire [3:0]ALUControlE;
	wire [31:0]ALUOutE;
	wire [31:0]ALUOutM;
	wire [31:0]ALUOutW;
	wire [31:0]InstrD;
	wire [31:0]InstrF;
	wire [31:0]PCBranchD;
	wire [31:0]PCPlus4D;
	wire [31:0]PCPlus4F;
	wire [31:0]RD1D;
	wire [31:0]RD1E;
	wire [31:0]RD2D;
	wire [31:0]RD2E;
	wire [31:0]ReadDataM;
	wire [31:0]ReadDataW;
	wire [31:0]ResultW;
	wire [31:0]SignImmD;
	wire [31:0]SignImmE;
	wire [31:0]WriteDataE;
	wire [31:0]WriteDataM;
	wire [4:0]RdD;
	wire [4:0]RdE;
	wire [4:0]RsD;
	wire [4:0]RsE;
	wire [4:0]RtD;
	wire [4:0]RtE;
	wire [4:0]WriteRegE;
	wire [4:0]WriteRegM;
	wire [4:0]WriteRegW;
	wire ALUSrcD;
	wire ALUSrcE;
	wire BranchD;
	wire ForwardAD;
	wire ForwardBD;
	wire JumpD;
	wire MemtoRegD;
	wire MemtoRegE;
	wire MemtoRegM;
	wire MemtoRegW;
	wire MemWriteD;
	wire MemWriteE;
	wire MemWriteM;
	wire PCSrcD;
	wire RegDstD;
	wire RegDstE;
	wire RegWriteD;
	wire RegWriteE;
	wire RegWriteM;
	wire RegWriteW;
	wire StallD;
	wire StallF;
	wire [2:0]LoadTypeD;
	wire [1:0]SaveTypeD;
	wire [2:0]LoadTypeE;
	wire [1:0]SaveTypeE;
	wire [2:0]LoadTypeM;
	wire [1:0]SaveTypeM;
	wire [2:0]LoadTypeW;
	wire ALUASrcD;
	wire ALUASrcE;
	wire [4:0]shamtD;
	wire [4:0]shamtE;

	IF inst_IF
		(
			.clk       (clk),
			.rst_n     (rst_n),
			.PCSrcD    (PCSrcD),
			.PCBranchD (PCBranchD),
			.StallF    (StallF),
			.InstrF    (InstrF),
			.PCPlus4F  (PCPlus4F)
		);

	IF_ID inst_IF_ID
		(
			.clk      (clk),
			.rst_n    (rst_n),
			.en       (~StallD),
			.clr      (PCSrcD),
			.InstrF   (InstrF),
			.InstrD   (InstrD),
			.PCPlus4F (PCPlus4F),
			.PCPlus4D (PCPlus4D)
		);

	ID inst_ID
		(
			.clk         (clk),
			.rst_n       (rst_n),
			.InstrD      (InstrD),
			.PCPlus4D    (PCPlus4D),
			.RegWriteW   (RegWriteW),
			.ResultW     (ResultW),
			.WriteRegW   (WriteRegW),
			.ALUOutM     (ALUOutM),
			.ForwardAD   (ForwardAD),
			.ForwardBD   (ForwardBD),
			.PCBranchD   (PCBranchD),
			.PCSrcD      (PCSrcD),
			.MemtoRegD   (MemtoRegD),
			.MemWriteD   (MemWriteD),
			.BranchD     (BranchD),
			.ALUSrcD     (ALUSrcD),
			.RegDstD     (RegDstD),
			.RegWriteD   (RegWriteD),
			.ALUControlD (ALUControlD),
			.JumpD       (JumpD),
			.RD1D        (RD1D),
			.RD2D        (RD2D),
			.RsD         (RsD),
			.RtD         (RtD),
			.RdD         (RdD),
			.SignImmD    (SignImmD),
			.LoadTypeD   (LoadTypeD),
			.SaveTypeD   (SaveTypeD),
			.ALUASrcD    (ALUASrcD),
			.shamtD      (shamtD)
		);

	ID_EX inst_ID_EX
		(
			.clk         (clk),
			.rst_n       (rst_n),
			.clr         (FlushE),
			.RegWriteD   (RegWriteD),
			.RegWriteE   (RegWriteE),
			.MemtoRegD   (MemtoRegD),
			.MemtoRegE   (MemtoRegE),
			.MemWriteD   (MemWriteD),
			.MemWriteE   (MemWriteE),
			.ALUControlD (ALUControlD),
			.ALUControlE (ALUControlE),
			.ALUSrcD     (ALUSrcD),
			.ALUSrcE     (ALUSrcE),
			.RegDstD     (RegDstD),
			.RegDstE     (RegDstE),
			.RD1D        (RD1D),
			.RD1E        (RD1E),
			.RD2D        (RD2D),
			.RD2E        (RD2E),
			.RsD         (RsD),
			.RsE         (RsE),
			.RtD         (RtD),
			.RtE         (RtE),
			.RdD         (RdD),
			.RdE         (RdE),
			.SignImmD    (SignImmD),
			.SignImmE    (SignImmE),
			.LoadTypeD   (LoadTypeD),
			.LoadTypeE   (LoadTypeE),
			.SaveTypeD   (SaveTypeD),
			.SaveTypeE   (SaveTypeE),
			.ALUASrcD    (ALUASrcD),
			.ALUASrcE    (ALUASrcE),
			.shamtD      (shamtD),
			.shamtE      (shamtE)
		);

	EX inst_EX
		(
			.clk         (clk),
			.rst_n       (rst_n),
			.ALUControlE (ALUControlE),
			.ALUSrcE     (ALUSrcE),
			.RegDstE     (RegDstE),
			.RD1E        (RD1E),
			.RD2E        (RD2E),
			.RtE         (RtE),
			.RdE         (RdE),
			.SignImmE    (SignImmE),
			.ALUASrcE    (ALUASrcE),
			.shamtE      (shamtE),
			.ALUOutM     (ALUOutM),
			.ResultW     (ResultW),
			.ForwardAE   (ForwardAE),
			.ForwardBE   (ForwardBE),
			.ALUOutE     (ALUOutE),
			.WriteDataE  (WriteDataE),
			.WriteRegE   (WriteRegE)
		);

	EX_MEM inst_EX_MEM
		(
			.clk        (clk),
			.rst_n      (rst_n),
			.RegWriteE  (RegWriteE),
			.RegWriteM  (RegWriteM),
			.MemtoRegE  (MemtoRegE),
			.MemtoRegM  (MemtoRegM),
			.MemWriteE  (MemWriteE),
			.MemWriteM  (MemWriteM),
			.ALUOutE    (ALUOutE),
			.ALUOutM    (ALUOutM),
			.WriteDataE (WriteDataE),
			.WriteDataM (WriteDataM),
			.WriteRegE  (WriteRegE),
			.WriteRegM  (WriteRegM),
			.LoadTypeE  (LoadTypeE),
			.LoadTypeM  (LoadTypeM),
			.SaveTypeE  (SaveTypeE),
			.SaveTypeM  (SaveTypeM)
		);

	MEM inst_MEM
		(
			.clk        (clk),
			.rst_n      (rst_n),
			.MemWriteM  (MemWriteM),
			.ALUOutM    (ALUOutM),
			.WriteDataM (WriteDataM),
			.SaveTypeM  (SaveTypeM),
			.ReadDataM  (ReadDataM),
			.sw         (sw),
			.btn        (btn),
			.seg        (seg),
			.led        (led)
		);

	MEM_WB inst_MEM_WB
		(
			.clk       (clk),
			.rst_n     (rst_n),
			.RegWriteM (RegWriteM),
			.RegWriteW (RegWriteW),
			.MemtoRegM (MemtoRegM),
			.MemtoRegW (MemtoRegW),
			.ReadDataM (ReadDataM),
			.ReadDataW (ReadDataW),
			.ALUOutM   (ALUOutM),
			.ALUOutW   (ALUOutW),
			.WriteRegM (WriteRegM),
			.WriteRegW (WriteRegW),
			.LoadTypeM (LoadTypeM),
			.LoadTypeW (LoadTypeW)
		);

	WB inst_WB
		(
			.clk       (clk),
			.rst_n     (rst_n),
			.MemtoRegW (MemtoRegW),
			.ReadDataW (ReadDataW),
			.ALUOutW   (ALUOutW),
			.LoadTypeW (LoadTypeW),
			.ResultW   (ResultW)
		);

	Hazard inst_Hazard
		(
			.BranchD   (BranchD),
			.RsD       (RsD),
			.RtD       (RtD),
			.RsE       (RsE),
			.RtE       (RtE),
			.WriteRegE (WriteRegE),
			.MemtoRegE (MemtoRegE),
			.RegWriteE (RegWriteE),
			.WriteRegM (WriteRegM),
			.MemtoRegM (MemtoRegM),
			.RegWriteM (RegWriteM),
			.WriteRegW (WriteRegW),
			.MemtoRegW (MemtoRegW),
			.RegWriteW (RegWriteW),
			.RegDstD   (RegDstD),
			.RegWriteD (RegWriteD),
			.StallF    (StallF),
			.StallD    (StallD),
			.ForwardAD (ForwardAD),
			.ForwardBD (ForwardBD),
			.FlushE    (FlushE),
			.ForwardAE (ForwardAE),
			.ForwardBE (ForwardBE)
		);

endmodule
