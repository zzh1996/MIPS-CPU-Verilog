`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:55:25 05/27/2016
// Design Name:   CPU
// Module Name:   C:/Users/zzh1996/Desktop/COD/MIPS_FINAL/test.v
// Project Name:  MIPS_FINAL
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clk;
	reg rst_n;
	reg [7:0]sw;
	reg [3:0]btn;
	wire [15:0]seg;
	wire [7:0]led;

	// Instantiate the Unit Under Test (UUT)
	CPU uut (.clk(clk), .rst_n(rst_n), .sw(sw), .btn(btn), .seg(seg), .led(led));

	initial begin
		// Initialize Inputs
		clk = 0;
		rst_n = 0;
		sw=0;
		btn=0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		rst_n=1;
		forever #10 clk=~clk;
	end
      
endmodule

