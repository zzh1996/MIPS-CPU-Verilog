`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:06:49 04/25/2016 
// Design Name: 
// Module Name:    ControlUnit 
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
module ControlUnit(
	input [5:0]Op,
	input [5:0]Funct,
	input [4:0]RtD,
	output reg MemtoReg,
	output reg MemWrite,
	output reg Branch,
	output reg ALUSrc,//0:rt 1:imm
	output reg RegDst,//0:rt 1:rd
	output reg RegWrite,
	output reg [3:0]ALUControl,
	output reg Jump,//0:PC=imm 1:PC=PC+imm
	output reg [2:0]BranchOp,
	output reg JumpR,
	output reg [2:0]LoadType,//w,h,hu,b,bu
	output reg [1:0]SaveType,//w,h,b
	output reg ALUASrc
   );
	
	always@(*)begin
		MemtoReg=0;
		MemWrite=0;
		Branch=0;
		ALUSrc=0;
		RegDst=0;
		RegWrite=0;
		Jump=0;
		ALUControl=0;
		BranchOp=0;
		JumpR=0;
		LoadType=0;
		SaveType=0;
		ALUASrc=0;

		case(Op)
			6'h8://addi
			begin
				ALUSrc=1;
				RegWrite=1;
				ALUControl=1;
			end
			6'h9://addiu
			begin
				ALUSrc=1;
				RegWrite=1;
				ALUControl=1;
			end
			6'hC://andi
			begin
				ALUSrc=1;
				RegWrite=1;
				ALUControl=3;
			end
			6'hD://ori
			begin
				ALUSrc=1;
				RegWrite=1;
				ALUControl=4;
			end
			6'hE://xori
			begin
				ALUSrc=1;
				RegWrite=1;
				ALUControl=5;
			end
			6'hA://slti
			begin
				ALUSrc=1;
				RegWrite=1;
				ALUControl=7;
			end
			6'hB://sltiu
			begin
				ALUSrc=1;
				RegWrite=1;
				ALUControl=0;
			end
			6'hF://lui
			begin
				ALUSrc=1;
				RegWrite=1;
				ALUControl=8;
			end
			6'h23://lw
			begin
				MemtoReg=1;
				ALUSrc=1;
				RegWrite=1;
				ALUControl=1;
			end
			6'h20://lb
			begin
				MemtoReg=1;
				ALUSrc=1;
				RegWrite=1;
				ALUControl=1;
				LoadType=3;
			end
			6'h24://lbu
			begin
				MemtoReg=1;
				ALUSrc=1;
				RegWrite=1;
				ALUControl=1;
				LoadType=4;
			end
			6'h21://lh
			begin
				MemtoReg=1;
				ALUSrc=1;
				RegWrite=1;
				ALUControl=1;
				LoadType=1;
			end
			6'h25://lhu
			begin
				MemtoReg=1;
				ALUSrc=1;
				RegWrite=1;
				ALUControl=1;
				LoadType=2;
			end
			6'h2b://sw
			begin
				MemWrite=1;
				ALUSrc=1;
				ALUControl=1;
			end
			6'h29://sh
			begin
				MemWrite=1;
				ALUSrc=1;
				ALUControl=1;
				SaveType=1;
			end
			6'h28://sb
			begin
				MemWrite=1;
				ALUSrc=1;
				ALUControl=1;
				SaveType=2;
			end
			6'h0://funct
			begin
				RegDst=1;
				RegWrite=1;
				case(Funct)
					6'h20:ALUControl=1;//add
					6'h21:ALUControl=1;//addu
					6'h22:ALUControl=2;//sub
					6'h23:ALUControl=2;//subu
					6'h2A:ALUControl=7;//slt
					6'h2B:ALUControl=0;//sltu
					6'h24:ALUControl=3;//and
					6'h25:ALUControl=4;//or
					6'h26:ALUControl=5;//xor
					6'h27:ALUControl=6;//nor
					6'h08://jr
					begin
						Jump=1;
						JumpR=1;
						Branch=1;
					end
					6'h4:ALUControl=9;//sllv
					6'h7:ALUControl=10;//srav
					6'h6:ALUControl=11;//srlv
					6'h0://sll
					begin
						ALUASrc=1;
						ALUControl=9;
					end
					6'h2://srl
					begin
						ALUASrc=1;
						ALUControl=11;
					end
					6'h3://sra
					begin
						ALUASrc=1;
						ALUControl=10;
					end
				endcase
			end
			6'h4://beq
			begin
				Branch=1;
				BranchOp=0;
			end
			6'h5://bne
			begin
				Branch=1;
				BranchOp=5;
			end
			6'h6://blez
			begin
				Branch=1;
				BranchOp=4;
			end
			6'h7://bgtz
			begin
				Branch=1;
				BranchOp=1;
			end
			6'h1:
			begin
				if(RtD==0)begin//bltz
					Branch=1;
					BranchOp=3;
				end
				else if(RtD==1)begin//bgez
					Branch=1;
					BranchOp=2;
				end
			end
			6'h2://j
			begin
				Jump=1;
			end
		endcase
	end

endmodule
