`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:38:26 05/26/2016 
// Design Name: 
// Module Name:    MEM 
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
module MEM(
	input clk,
	input rst_n,

	input MemWriteM,
	input [31:0]ALUOutM,
	input [31:0]WriteDataM,
	input [1:0]SaveTypeM,

	output reg [31:0]ReadDataM,

	input [7:0]sw,
	input [3:0]btn,
	output reg [15:0]seg,
	output reg [7:0]led
	);

	wire [7:0]Addr;
	wire [1:0]TwoBit;
	wire [31:0]ReadData;
	reg [31:0]WriteData;
	reg [7:0]sw_r;
	reg [3:0]btn_r;

	assign Addr=ALUOutM[9:2];
	assign TwoBit=ALUOutM[1:0];

	always@(*)begin
		case(Addr)
			124:ReadDataM=sw_r;
			125:ReadDataM=btn_r;
			126:ReadDataM=seg;
			127:ReadDataM=led;
			default:ReadDataM=ReadData;
		endcase
	end

	always@(posedge clk or negedge rst_n)begin
		if(~rst_n)begin
			seg<=0;
			led<=0;
		end
		else if(MemWriteM) begin
			case(Addr)
				126:seg<=WriteData[15:0];
				127:led<=WriteData[7:0];
			endcase
		end
	end

	always@(posedge clk or negedge rst_n)begin
		if(~rst_n)begin
			sw_r<=0;
			btn_r<=0;
		end
		else begin
			sw_r<=sw;
			btn_r<=btn;	
		end
	end

	always@(*)begin
		case(SaveTypeM)
			0:WriteData=WriteDataM;
			1:
			begin
				if(TwoBit==0)
					WriteData={ReadData[31:16],WriteDataM[15:0]};
				else if(TwoBit==2)
					WriteData={WriteDataM[15:0],ReadData[15:0]};
				else
					WriteData=0;
			end
			2:
			begin
				if(TwoBit==0)
					WriteData={ReadData[31:8],WriteDataM[7:0]};
				else if(TwoBit==1)
					WriteData={ReadData[31:16],WriteDataM[7:0],ReadData[7:0]};
				else if(TwoBit==2)
					WriteData={ReadData[31:24],WriteDataM[7:0],ReadData[15:0]};
				else
					WriteData={WriteDataM[7:0],ReadData[23:0]};
			end
			default:WriteData=0;
		endcase
	end

	DRAM dram(Addr,WriteData,clk,MemWriteM,ReadData);

endmodule
