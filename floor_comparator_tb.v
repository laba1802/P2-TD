`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:32:35 03/29/2017
// Design Name:   floor_comparator
// Module Name:   D:/Proyectos/Proyecto2Taller/P2-TD/floor_comparator_tb.v
// Project Name:  Proyecto2Taller
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: floor_comparator
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module floor_comparator_tb;

	// Inputs
	reg [1:0] actualFloor;
	reg [1:0] pos0Mem;

	// Outputs
	wire down_upFlag;
	wire stop_goFlag;
	wire deletePos0;

	// Instantiate the Unit Under Test (UUT)
	floor_comparator uut (
		.actualFloor(actualFloor), 
		.pos0Mem(pos0Mem), 
		.down_upFlag(down_upFlag), 
		.stop_goFlag(stop_goFlag),
		.deletePos0(deletePos0)
	);

	initial begin
		// Initialize Inputs
		actualFloor = 0;
		pos0Mem = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#10
		actualFloor = 00;
		pos0Mem = 00;
		
		#10
		actualFloor = 11;
		pos0Mem = 00;
		
		#10
		actualFloor = 01;
		pos0Mem = 11;
		
		#10
		actualFloor = 00;
		pos0Mem = 11;
		
		#10 $finish;
	end
      
endmodule

