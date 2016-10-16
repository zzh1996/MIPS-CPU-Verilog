`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:07:31 05/28/2016 
// Design Name: 
// Module Name:    BranchUnit 
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
module BranchUnit(
	input signed [31:0]RD1D,
	input signed [31:0]RD2D,
	input [2:0]BranchOp,
	output reg ConditionD
    );

	always@(*)begin
		case(BranchOp)
			0:ConditionD=RD1D==RD2D;//beq
			1:ConditionD=RD1D>0;//bgtz
			2:ConditionD=RD1D>=0;//bgez
			3:ConditionD=RD1D<0;//bltz
			4:ConditionD=RD1D<=0;//blez
			5:ConditionD=RD1D!=RD2D;//bne
			6:ConditionD=0;
			7:ConditionD=0;
		endcase
	end

endmodule
