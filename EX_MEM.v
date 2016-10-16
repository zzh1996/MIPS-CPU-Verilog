`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:42:07 05/26/2016 
// Design Name: 
// Module Name:    EX_MEM 
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
module EX_MEM(
	input clk,
	input rst_n,

	input RegWriteE,
	output reg RegWriteM,
	input MemtoRegE,
	output reg MemtoRegM,
	input MemWriteE,
	output reg MemWriteM,
	input [31:0]ALUOutE,
	output reg [31:0]ALUOutM,
	input [31:0]WriteDataE,
	output reg [31:0]WriteDataM,
	input [4:0]WriteRegE,
	output reg [4:0]WriteRegM,
	input [2:0]LoadTypeE,
	output reg [2:0]LoadTypeM,
	input [1:0]SaveTypeE,
	output reg [1:0]SaveTypeM
    );
	
	always @(posedge clk or negedge rst_n) begin
		if (~rst_n) begin
			RegWriteM<=0;
			MemtoRegM<=0;
			MemWriteM<=0;
			ALUOutM<=0;
			WriteDataM<=0;
			WriteRegM<=0;
			LoadTypeM<=0;
			SaveTypeM<=0;
		end
		else begin
			RegWriteM<=RegWriteE;
			MemtoRegM<=MemtoRegE;
			MemWriteM<=MemWriteE;
			ALUOutM<=ALUOutE;
			WriteDataM<=WriteDataE;
			WriteRegM<=WriteRegE;
			LoadTypeM<=LoadTypeE;
			SaveTypeM<=SaveTypeE;
		end
	end


endmodule
