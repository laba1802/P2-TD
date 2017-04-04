`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:57:01 04/01/2017
// Design Name:   memory
// Module Name:   D:/Proyectos/Proyecto2Taller/P2-TD/memory_tb.v
// Project Name:  Proyecto2Taller
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: memory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module memory_tb;

	// Inputs
	reg [1:0] buttonFloor_Input;
	reg buttonFloor_FirstLast_Flag;
	reg [1:0] switchFloor_Input;
	reg switchFloor_FirstLast_Flag;
	reg deletePos0;

	// Outputs
	wire [1:0] Pos0;

	// Instantiate the Unit Under Test (UUT)
	memory uut (
		.buttonFloor_Input(buttonFloor_Input), 
		.buttonFloor_FirstLast_Flag(buttonFloor_FirstLast_Flag), 
		.switchFloor_Input(switchFloor_Input), 
		.switchFloor_FirstLast_Flag(switchFloor_FirstLast_Flag), 
		.deletePos0(deletePos0), 
		.Pos0(Pos0)
	);

	initial begin
		// Initialize Inputs
		/*buttonFloor_Input = 0;
		buttonFloor_FirstLast_Flag = 0;
		switchFloor_Input = 0;
		switchFloor_FirstLast_Flag = 0;*/
		deletePos0 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#10;
		buttonFloor_Input = 10;
		buttonFloor_FirstLast_Flag = 1;
		
		#10;
		switchFloor_Input = 11;
		switchFloor_FirstLast_Flag = 0;
		
		#10
		deletePos0 = 1;
		
		#10 $finish;
	end
      
endmodule

