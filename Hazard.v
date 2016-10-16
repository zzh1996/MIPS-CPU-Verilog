`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:40:48 05/26/2016 
// Design Name: 
// Module Name:    Hazard 
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
module Hazard(
	input BranchD,
	input [4:0]RsD,
	input [4:0]RtD,
	input [4:0]RsE,
	input [4:0]RtE,
	input [4:0]WriteRegE,
	input MemtoRegE,
	input RegWriteE,
	input [4:0]WriteRegM,
	input MemtoRegM,
	input RegWriteM,
	input [4:0]WriteRegW,
	input MemtoRegW,
	input RegWriteW,
	input RegDstD,
	input RegWriteD,

	output reg StallF,
	output reg StallD,
	output reg ForwardAD,
	output reg ForwardBD,
	output reg FlushE,
	output reg [1:0]ForwardAE,
	output reg [1:0]ForwardBE
    );

	always @(*) begin
		ForwardAE=0;
		ForwardBE=0;
		ForwardAD=0;
		ForwardBD=0;
		StallF=0;
		StallD=0;
		FlushE=0;
		
		if(RegWriteW&MemtoRegW)begin//mem->alu2
			if(WriteRegW)begin
				if(WriteRegW==RsE)
					ForwardAE=1;
				if(WriteRegW==RtE)
					ForwardBE=1;
			end
		end
		if(RegWriteM&~MemtoRegM&~BranchD)begin//alu->alu2
			if(WriteRegM)begin
				if(WriteRegM==RsD)
					ForwardAD=1;
				if(WriteRegM==RtD)
					ForwardBD=1;
			end
		end
		if(RegWriteM&~MemtoRegM&BranchD)begin//alu->eq2
			if(WriteRegM)begin
				if(WriteRegM==RsD)
					ForwardAD=1;
				if(WriteRegM==RtD)
					ForwardBD=1;
			end
		end
		if(RegWriteM&MemtoRegM&BranchD)begin//mem->eq2
			if(WriteRegM)begin
				if(WriteRegM==RsD||WriteRegM==RtD&&(RegDstD||~RegWriteD))begin
					FlushE=1;
					StallD=1;
					StallF=1;
				end
			end
		end
		if(RegWriteM&~MemtoRegM)begin//alu->alu
			if(WriteRegM)begin
				if(WriteRegM==RsE)
					ForwardAE=2;
				if(WriteRegM==RtE)
					ForwardBE=2;
			end
		end
		if(RegWriteE&~MemtoRegE&BranchD)begin//alu->eq
			if(WriteRegE)begin
				if(WriteRegE==RsD||WriteRegE==RtD&&(RegDstD||~RegWriteD))begin
					FlushE=1;
					StallD=1;
					StallF=1;
				end
			end
		end
		if(RegWriteE&MemtoRegE&~BranchD)begin//mem->alu
			if(WriteRegE)begin
				if(WriteRegE==RsD||WriteRegE==RtD&&(RegDstD||~RegWriteD))begin
					FlushE=1;
					StallD=1;
					StallF=1;
				end
			end
		end
		if(RegWriteE&MemtoRegE&BranchD)begin//mem->eq
			if(WriteRegE)begin
				if(WriteRegE==RsD||WriteRegE==RtD&&(RegDstD||~RegWriteD))begin
					FlushE=1;
					StallD=1;
					StallF=1;
				end
			end
		end
	end


endmodule
