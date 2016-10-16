`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:38:35 05/26/2016 
// Design Name: 
// Module Name:    WB 
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
module WB(
	input clk,
	input rst_n,

	input MemtoRegW,
	input [31:0]ReadDataW,
	input [31:0]ALUOutW,
	input [2:0]LoadTypeW,

	output [31:0]ResultW
    );

	wire [31:0]SplitDataW;

	assign ResultW=MemtoRegW?SplitDataW:ALUOutW;

	SplitWord spw(ReadDataW,LoadTypeW,ALUOutW[1:0],SplitDataW);

endmodule
