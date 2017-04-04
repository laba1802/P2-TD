`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:54:31 04/02/2017
// Design Name:   top
// Module Name:   D:/Proyectos/Proyecto2Taller/P2-TD/top_tb.v
// Project Name:  Proyecto2Taller
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module top_tb;

	// Inputs
	reg switch_Up_First;
	reg switch_Up_Second;
	reg switch_Down_Second;
	reg switch_Up_Third;
	reg switch_Down_Third;
	reg switch_Down_Fourth;
	reg clk;
	reg button_FirstFloor;
	reg button_SecondFloor;
	reg button_ThirdFloor;
	reg button_FourthFloor;
	reg reset;

	// Outputs
	wire a;
	wire b;
	wire c;
	wire d;
	wire e;
	wire f;
	wire g;
	wire dp;
	wire [3:0] an;
	wire [1:0] actualFloor;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.switch_Up_First(switch_Up_First), 
		.switch_Up_Second(switch_Up_Second), 
		.switch_Down_Second(switch_Down_Second), 
		.switch_Up_Third(switch_Up_Third), 
		.switch_Down_Third(switch_Down_Third), 
		.switch_Down_Fourth(switch_Down_Fourth), 
		.clk(clk), 
		.button_FirstFloor(button_FirstFloor), 
		.button_SecondFloor(button_SecondFloor), 
		.button_ThirdFloor(button_ThirdFloor), 
		.button_FourthFloor(button_FourthFloor),
		.reset(reset), 
		.a(a), 
		.b(b), 
		.c(c), 
		.d(d), 
		.e(e), 
		.f(f), 
		.g(g), 
		.dp(dp), 
		.an(an),
		.actualFloor(actualFloor)
	);

	initial begin
		// Initialize Inputs
		switch_Up_First = 0;
		switch_Up_Second = 0;
		switch_Down_Second = 0;
		switch_Up_Third = 0;
		switch_Down_Third = 0;
		switch_Down_Fourth = 0;
		button_FirstFloor = 0;
		button_SecondFloor = 0;
		button_ThirdFloor = 0;
		button_FourthFloor = 0;
		
		clk = 0;
		reset = 1;

		// Wait 100 ns for global reset to finish
		#100;
		reset = 0;
		
		/*#10;
      button_FourthFloor = 1;
		
		#10; 
		button_FourthFloor = 0;*/
		
		#10;
      button_SecondFloor = 1;
		
		#30; 
		button_SecondFloor = 0;
		
		
		#10;
		button_ThirdFloor = 1;
		
		#30;
		button_ThirdFloor = 0;
		
		#10;
		button_FourthFloor = 1;
		
		#30; 
		button_FourthFloor = 0;
		
		#400;
		button_SecondFloor = 1;
		
		#30; 
		button_SecondFloor = 0;
		

		//switch_Up_First = 0;
		// Add stimulus here

	end
	
	always begin
		#10; clk = ~clk;
	end
      
endmodule

