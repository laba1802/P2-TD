`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:10:45 03/29/2017 
// Design Name: 
// Module Name:    buttons_controller 
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
module buttons_controller(
    input first_up,
    input second_down,
    input second_up,
    input third_down,
    input third_up,
    input fourth_down,
    output reg [1:0] floor_call,
    output reg up_down_flag
    );
	 
	 always @ * begin
		if(first_up) floor_call = 00;
		else if(second_down || second_up) floor_call = 01;
		else if(third_down || third_up) floor_call = 10;
		else if(fourth_down) floor_call = 11;
	 end
	 
	 always @ * begin
		if(first_up || second_up || third_up) up_down_flag = 1;
		else up_down_flag = 0;
	 end

endmodule
