`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:41:39 03/15/2017 
// Design Name: 
// Module Name:    state_machine 
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
module state_machine(
	 input CLK,
	 input RST,
    input stop_go,
    input up_down,
    input [1:0] floor,
    output reg [2:0] output_floor
    );
	
	reg [1:0] actual_state, next_state;
	parameter [1:0] F1 = 2'b00, F2 = 2'b01, F3 = 2'b10, F4 = 2'b11;
	
	always @ (posedge CLK)
		if(RST) actual_state <= F1;
		else actual_state <= next_state;	
	
	always @ (actual_state or stop_go or up_down)
		case(actual_state)
			F1:
				begin
					if(~stop_go & up_down) next_state = F2;
					else next_state = F1;
				end
			F2:
				begin
					if(~stop_go)
						begin
							if(up_down) next_state = F3;
							else next_state = F1;
						end
					else next_state = F2;
				end
			F3:
				begin
					if(~stop_go)
						begin
							if(up_down) next_state = F4;
							else next_state = F2;
						end
					else next_state = F3;
				end
			F4:	
				begin
					if(~stop_go & ~up_down) next_state = F3;
					else next_state = F4;
				end
		endcase
		
	always @ (actual_state)
		case(actual_state)
			F1:	
				output_floor = 001;
			F2:		
				output_floor = 010;
			F3:
				output_floor = 011;
			F4:		
				output_floor = 100;
			default:
				output_floor = 001;
		endcase
endmodule
