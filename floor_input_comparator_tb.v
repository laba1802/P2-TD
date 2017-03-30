`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:06:39 03/29/2017
// Design Name:   floor_input_comparator
// Module Name:   D:/Proyectos/Proyecto2Taller/P2-TD/floor_input_comparator_tb.v
// Project Name:  Proyecto2Taller
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: floor_input_comparator
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module floor_input_comparator_tb;

	// Inputs
	reg [1:0] floor_destiny_Input;
	reg [1:0] pos0Mem;
	reg [1:0] actualFloor;
	reg down_up_Flag;

	// Outputs
	wire beginEndMemory_Flag;

	// Instantiate the Unit Under Test (UUT)
	floor_input_comparator uut (
		.floor_destiny_Input(floor_destiny_Input), 
		.pos0Mem(pos0Mem), 
		.actualFloor(actualFloor), 
		.down_up_Flag(down_up_Flag), 
		.beginEndMemory_Flag(beginEndMemory_Flag)
	);

	initial begin
		// Initialize Inputs
		floor_destiny_Input = 0;
		pos0Mem = 0;
		actualFloor = 0;
		down_up_Flag = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		floor_destiny_Input = 10; //*
		actualFloor = 01; //+
		pos0Mem = 11;
		down_up_Flag = 1;
		
		#10
		floor_destiny_Input = 11; //*
		actualFloor = 01; //+
		pos0Mem = 10;
		down_up_Flag = 1;
		
		#10
		floor_destiny_Input = 10; //*
		actualFloor = 00; //+
		pos0Mem = 11;
		down_up_Flag = 1;
		
		#10
		floor_destiny_Input = 01; //*
		actualFloor = 11; //+
		pos0Mem = 00;
		down_up_Flag = 0;
		
		#10
		floor_destiny_Input = 11; //*
		actualFloor = 10; //+
		pos0Mem = 01;
		down_up_Flag = 0;
		
		#10
		floor_destiny_Input = 00; //*
		actualFloor = 10; //+
		pos0Mem = 01;
		down_up_Flag = 0;
		
		#10 $finish;
	end
      
endmodule

