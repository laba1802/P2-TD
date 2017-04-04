`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:52:21 03/29/2017 
// Design Name: 
// Module Name:    floor_input_comparator 
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
module floor_input_comparator(
    input [2:0] floor_destiny_Input,
    input [1:0] pos0Mem,
	 input [1:0] actualFloor,
    input down_up_Flag,
    output reg [1:0] beginEndMemory_Flag,
	 output reg [2:0] nextMemoryFloor
    );
	 
	
	always @ (floor_destiny_Input) begin
	$display("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA ",floor_destiny_Input);
			if(down_up_Flag) begin
				if(floor_destiny_Input < pos0Mem && floor_destiny_Input > actualFloor) begin
					beginEndMemory_Flag = 2'b11;
					nextMemoryFloor = floor_destiny_Input;
				end
				else begin
					beginEndMemory_Flag = 2'b10;
					nextMemoryFloor = floor_destiny_Input;
				end 
			end else begin
				if(floor_destiny_Input > pos0Mem && floor_destiny_Input < actualFloor) begin
					beginEndMemory_Flag = 2'b11;
					nextMemoryFloor = floor_destiny_Input;
				end
				else begin
					beginEndMemory_Flag = 2'b10;
					nextMemoryFloor = floor_destiny_Input;
				end
			end
	end

endmodule
