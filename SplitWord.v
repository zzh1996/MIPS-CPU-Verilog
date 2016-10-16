`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:03:37 05/28/2016 
// Design Name: 
// Module Name:    SplitWord 
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
module SplitWord(
	input [31:0]ReadDataW,
	input [2:0]LoadTypeW,
	input [1:0]TwoBit,
	output reg [31:0]SplitDataW
    );

	always@(*)begin
		SplitDataW=0;
		case(LoadTypeW)
			0:SplitDataW=ReadDataW;
			1:
			begin
				if(TwoBit==0)
					SplitDataW=$signed(ReadDataW[15:0]);
				else if(TwoBit==2)
					SplitDataW=$signed(ReadDataW[31:16]);
			end
			2:
			begin
				if(TwoBit==0)
					SplitDataW=ReadDataW[15:0];
				else if(TwoBit==2)
					SplitDataW=ReadDataW[31:16];
			end
			3:
			begin
				if(TwoBit==0)
					SplitDataW=$signed(ReadDataW[7:0]);
				else if(TwoBit==1)
					SplitDataW=$signed(ReadDataW[15:8]);
				else if(TwoBit==2)
					SplitDataW=$signed(ReadDataW[23:16]);
				else
					SplitDataW=$signed(ReadDataW[31:24]);
			end
			4:
			begin
				if(TwoBit==0)
					SplitDataW=ReadDataW[7:0];
				else if(TwoBit==1)
					SplitDataW=ReadDataW[15:8];
				else if(TwoBit==2)
					SplitDataW=ReadDataW[23:16];
				else
					SplitDataW=ReadDataW[31:24];
			end
		endcase
	end

endmodule
