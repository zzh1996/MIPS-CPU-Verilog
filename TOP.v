`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:40:16 05/28/2016 
// Design Name: 
// Module Name:    TOP 
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
module TOP(
	input clk,
	input [7:0]sw,
	input [3:0]btn,
	output [6:0]seg,
	output dp,
	output [7:0]Led,
	output [3:0]an
    );

	wire [15:0]segdata;
	wire cclk;
	wire [7:0]sw_;
	wire [3:0]btn_;

	assign dp=1;

	debounce deb0(sw[0],clk,sw_[0]);
	debounce deb1(sw[1],clk,sw_[1]);
	debounce deb2(sw[2],clk,sw_[2]);
	debounce deb3(sw[3],clk,sw_[3]);
	debounce deb4(sw[4],clk,sw_[4]);
	debounce deb5(sw[5],clk,sw_[5]);
	debounce deb6(sw[6],clk,sw_[6]);
	debounce deb7(sw[7],clk,sw_[7]);

	debounce deb8(btn[0],clk,btn_[0]);
	debounce deb9(btn[1],clk,btn_[1]);
	debounce deba(btn[2],clk,btn_[2]);
	debounce debb(btn[3],clk,btn_[3]);
	
	CPU cpu(clk,~btn[0],sw_,btn_,segdata,Led);

	display disp(clk,segdata,an,seg);

endmodule

module debounce(
	input in,
	input clk,
	output reg out=0
	);
	
	reg [31:0] cnt=0;
	
	always@(posedge clk)
	begin
		if(in!=out)
			cnt<=cnt+1;
		else
			cnt<=0;
		if(cnt>=500000)
		begin
			out<=in;
			cnt<=0;
		end
	end
endmodule

module clock(
	input clk,
	input [31:0]max,
	output reg c=0
	);
	
	reg [31:0]count1;
	
	always@(posedge clk)
	begin
		if(count1>=max)
		begin
			count1<=0;
			c<=~c;
		end
		else count1<=count1+1;
	end
endmodule

module display(
	input clk,
	input [15:0]num,
	output reg [3:0]an=4'b1110,
	output reg [6:0]seg
	);
	
	wire t1;
	reg [1:0]c=0;
	reg [3:0]n;
	
	clock cl(clk,25000,t1);
	
	always@(posedge t1)
	begin
		an<={an[2:0],an[3]};
		c<=c+1;
	end
	
	always@(*)
	begin
		case(n)
			0:seg=7'b1000000;//0
			1:seg=7'b1111001;//1
			2:seg=7'b0100100;//2
			3:seg=7'b0110000;//3
			4:seg=7'b0011001;//4
			5:seg=7'b0010010;//5
			6:seg=7'b0000010;//6
			7:seg=7'b1111000;//7
			8:seg=7'b0000000;//8
			9:seg=7'b0010000;//9
			10:seg=7'b0001000;//A
			11:seg=7'b0000011;//b
			12:seg=7'b1000110;//C
			13:seg=7'b0100001;//d
			14:seg=7'b0000110;//E
			15:seg=7'b0001110;//F
		endcase
	end
	
	always@(*)
	begin
		case(c)
			0:n=num[3:0];
			1:n=num[7:4];
			2:n=num[11:8];
			3:n=num[15:12];
		endcase
	end
endmodule