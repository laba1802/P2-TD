`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:26:40 03/29/2017 
// Design Name: 
// Module Name:    floor_comparator 
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
module floor_comparator(
    input [1:0] actualFloor,
    input [1:0] pos0Mem,
    output reg down_upFlag,
    output reg stop_goFlag,
	 output reg deletePos0
    );
	 
	 always @ (*) begin
	 $display("POOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOS ",pos0Mem,actualFloor);
			 if(pos0Mem < actualFloor)begin
				down_upFlag = 0;
				stop_goFlag = 0;
				deletePos0 = 0;
			 end else if(pos0Mem == actualFloor)begin
				down_upFlag = 0;
				stop_goFlag = 1;
				deletePos0 = 1;
			 end else if(pos0Mem > actualFloor)begin
				down_upFlag = 1;
				stop_goFlag = 0;
				deletePos0 = 0;
			 end
	 end 
	 
endmodule 