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
    input [1:0] floor_destiny_Input,
    input [1:0] pos0Mem,
	 input [1:0] actualFloor,
    input down_up_Flag,
    output reg beginEndMemory_Flag
    );

	always @ * begin
		if(down_up_Flag) begin
			if(floor_destiny_Input < pos0Mem && floor_destiny_Input > actualFloor) beginEndMemory_Flag = 1;
			else beginEndMemory_Flag = 0;
		end else begin
			if(floor_destiny_Input > pos0Mem && floor_destiny_Input < actualFloor) beginEndMemory_Flag = 1;
			else beginEndMemory_Flag = 0;
		end
	end

endmodule
