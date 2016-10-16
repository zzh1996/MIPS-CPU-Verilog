`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:06:28 03/22/2016 
// Design Name: 
// Module Name:    ALU 
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

module ALU(
   input [31:0] alu_a,
   input [31:0] alu_b,
   input [3:0] alu_op,
   output reg [31:0] alu_out
   );
	
	always@(*)
	begin
		case(alu_op)
			0:alu_out=alu_a<alu_b?1:0;
			1:alu_out=alu_a+alu_b;
			2:alu_out=alu_a-alu_b;
			3:alu_out=alu_a&alu_b;
			4:alu_out=alu_a|alu_b;
			5:alu_out=alu_a^alu_b;
			6:alu_out=~(alu_a|alu_b);
			7:alu_out=$signed(alu_a)<$signed(alu_b)?1:0;
			8:alu_out={alu_b,16'b0};//lui
			9:alu_out=alu_b<<alu_a[4:0];//sllv
			10:alu_out=$signed(alu_b)>>>alu_a[4:0];//srav
			11:alu_out=alu_b>>alu_a[4:0];//srlv
			default:alu_out=0;
		endcase
	end

endmodule
