`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:50:49 03/29/2017 
// Design Name: 
// Module Name:    numberFloor_controller 
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
module numberFloor_controller(
    input button1,
    input button2,
    input button3,
    input button4,
    output reg [2:0] floor_destiny
    );

	always @ * begin
		if(button1) floor_destiny = 3'b000;
		else if(button2) floor_destiny = 3'b001;
		else if(button3) floor_destiny = 3'b010;
		else if(button4) floor_destiny = 3'b011;
		else floor_destiny = 3'b100;
	end

endmodule
