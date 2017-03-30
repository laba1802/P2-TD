`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:33:18 03/29/2017
// Design Name:   buttons_controller
// Module Name:   D:/Proyectos/Proyecto2Taller/P2-TD/buttons_controller_tb.v
// Project Name:  Proyecto2Taller
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: buttons_controller
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module buttons_controller_tb;

	// Inputs
	reg first_up;
	reg second_down;
	reg second_up;
	reg third_down;
	reg third_up;
	reg fourth_down;

	// Outputs
	wire [1:0] floor_call;
	wire up_down_flag;

	// Instantiate the Unit Under Test (UUT)
	buttons_controller uut (
		.first_up(first_up), 
		.second_down(second_down), 
		.second_up(second_up), 
		.third_down(third_down), 
		.third_up(third_up), 
		.fourth_down(fourth_down), 
		.floor_call(floor_call), 
		.up_down_flag(up_down_flag)
	);

	initial begin
		// Initialize Inputs
		first_up = 0;
		second_down = 0;
		second_up = 0;
		third_down = 0;
		third_up = 0;
		fourth_down = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#10
		first_up = 1;
		
		#10
		first_up = 0;
		second_down = 1;
		
		#10
		second_down = 0;
		second_up = 1;
		
		#10
		second_up = 0;
		third_down = 1;
		
		#10
		third_down = 0;
		third_up = 1;
		
		#10
		third_up = 0;
		fourth_down = 1;
		
		#10 $finish;
	end
      
endmodule

