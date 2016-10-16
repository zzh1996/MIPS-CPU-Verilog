`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:42:30 05/26/2016 
// Design Name: 
// Module Name:    MEM_WB 
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
module MEM_WB(
	input clk,
	input rst_n,

	input RegWriteM,
	output reg RegWriteW,
	input MemtoRegM,
	output reg MemtoRegW,
	input [31:0]ReadDataM,
	output reg [31:0]ReadDataW,
	input [31:0]ALUOutM,
	output reg [31:0]ALUOutW,
	input [4:0]WriteRegM,
	output reg [4:0]WriteRegW,
	input [2:0]LoadTypeM,
	output reg [2:0]LoadTypeW
    );
	
	always @(posedge clk or negedge rst_n) begin
		if (~rst_n) begin
			RegWriteW<=0;
			MemtoRegW<=0;
			ReadDataW<=0;
			ALUOutW<=0;
			WriteRegW<=0;
			LoadTypeW<=0;
		end
		else begin
			RegWriteW<=RegWriteM;
			MemtoRegW<=MemtoRegM;
			ReadDataW<=ReadDataM;
			ALUOutW<=ALUOutM;
			WriteRegW<=WriteRegM;
			LoadTypeW<=LoadTypeM;
		end
	end	

endmodule
