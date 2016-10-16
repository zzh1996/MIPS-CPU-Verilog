`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:50:45 03/26/2016 
// Design Name: 
// Module Name:    REG_FILE 
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
module REG_FILE(
	input clk,
	input rst_n,
	input	[4:0] r1_addr,
	input	[4:0] r2_addr,
	input	[4:0] r3_addr,
	input	[31:0] r3_din,
	input	r3_wr,
	output [31:0] r1_dout,
	output [31:0] r2_dout
);

reg [31:0] r [31:0];

always@(posedge clk or negedge rst_n)
begin
	if(!rst_n)
	begin
		r[0]<=0;
		r[1]<=0;
		r[2]<=0;
		r[3]<=0;
		r[4]<=0;
		r[5]<=0;
		r[6]<=0;
		r[7]<=0;
		r[8]<=0;
		r[9]<=0;
		r[10]<=0;
		r[11]<=0;
		r[12]<=0;
		r[13]<=0;
		r[14]<=0;
		r[15]<=0;
		r[16]<=0;
		r[17]<=0;
		r[18]<=0;
		r[19]<=0;
		r[20]<=0;
		r[21]<=0;
		r[22]<=0;
		r[23]<=0;
		r[24]<=0;
		r[25]<=0;
		r[26]<=0;
		r[27]<=0;
		r[28]<=0;
		r[29]<=0;
		r[30]<=0;
		r[31]<=0;
	end
	else
		if(r3_wr)
			r[r3_addr]<=r3_din;
end

assign r1_dout=r[r1_addr];
assign r2_dout=r[r2_addr];

endmodule
