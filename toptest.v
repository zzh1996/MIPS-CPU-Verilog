`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:37:28 05/28/2016
// Design Name:   TOP
// Module Name:   C:/Users/zzh1996/Desktop/COD/MIPS_FINAL/toptest.v
// Project Name:  MIPS_FINAL
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: TOP
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module toptest;

	// Inputs
	reg clk;
	reg [7:0] sw;
	reg [3:0] btn;

	// Outputs
	wire [6:0] seg;
	wire dp;
	wire [7:0] Led;
	wire [3:0] an;

	// Instantiate the Unit Under Test (UUT)
	TOP uut (
		.clk(clk), 
		.sw(sw), 
		.btn(btn), 
		.seg(seg), 
		.dp(dp), 
		.Led(Led), 
		.an(an)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		sw = 0;
		btn = 4'b1111;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		btn = 0;
		sw=1;
		forever #10 clk=~clk;
	end
	
	initial begin
		forever #50000 btn[2]=~btn[2];
	end
      
endmodule

