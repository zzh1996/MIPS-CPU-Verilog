`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:37:58 05/26/2016 
// Design Name: 
// Module Name:    IF 
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
module IF(
	input clk,
	input rst_n,

	input PCSrcD,
	input [31:0]PCBranchD,

	input StallF,
	
	output [31:0]InstrF,
	output [31:0]PCPlus4F
    );
	
	wire [31:0]PC_;

	reg [31:0]PCF;
	
	IMEM imem(PCF[9:2],InstrF);

	assign PC_=PCSrcD?PCBranchD:PCPlus4F;
	assign PCPlus4F=PCF+4;

	always @(posedge clk or negedge rst_n) begin
		if (~rst_n) begin
			PCF<=0;
		end
		else if (~StallF) begin
			PCF<=PC_;
		end
	end

endmodule
