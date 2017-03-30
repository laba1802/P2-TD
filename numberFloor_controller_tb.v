`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:53:22 03/29/2017
// Design Name:   numberFloor_controller
// Module Name:   D:/Proyectos/Proyecto2Taller/P2-TD/numberFloor_controller_tb.v
// Project Name:  Proyecto2Taller
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: numberFloor_controller
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module numberFloor_controller_tb;

	// Inputs
	reg button1;
	reg button2;
	reg button3;
	reg button4;

	// Outputs
	wire [1:0] floor_destiny;

	// Instantiate the Unit Under Test (UUT)
	numberFloor_controller uut (
		.button1(button1), 
		.button2(button2), 
		.button3(button3), 
		.button4(button4), 
		.floor_destiny(floor_destiny)
	);

	initial begin
		// Initialize Inputs
		button1 = 0;
		button2 = 0;
		button3 = 0;
		button4 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#10
		button1 = 1;
		
		#10
		button1 = 0;
		button2 = 1;
		
		#10
		button2 = 0;
		button3 = 1;
		
		#10
		button3 = 0;
		button4 = 1;
		
		#10 $finish;
	end
      
endmodule

