`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:52:52 03/29/2017 
// Design Name: 
// Module Name:    switch_input_comparator 
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
module switch_input_comparator(
    input down_up_Flag,
    input [1:0] pos0Mem,
    input down_up_Input,
    input [1:0] floorCall_Input,
    input [1:0] actualFloor,
    output reg [1:0] nextMemoryFloor,
    output reg BeginEndMemory_Flag
    );

	always @ * begin
		if (down_up_Flag == down_up_Input)begin
			if((floorCall_Input > actualFloor && floorCall_Input < pos0Mem) || (floorCall_Input < actualFloor && floorCall_Input > pos0Mem))begin
				nextMemoryFloor = floorCall_Input;
				BeginEndMemory_Flag = 1;
			end else begin
				nextMemoryFloor = floorCall_Input;
				BeginEndMemory_Flag = 0;
			end
		end else begin
			nextMemoryFloor = floorCall_Input;
			BeginEndMemory_Flag = 0;
		end
	end
endmodule
