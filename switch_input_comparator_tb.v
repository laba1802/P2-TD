`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:11:07 03/29/2017
// Design Name:   switch_input_comparator
// Module Name:   D:/Proyectos/Proyecto2Taller/P2-TD/switch_input_comparator_tb.v
// Project Name:  Proyecto2Taller
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: switch_input_comparator
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module switch_input_comparator_tb;

	// Inputs
	reg down_up_Flag;
	reg [1:0] pos0Mem;
	reg down_up_Input;
	reg [1:0] floorCall_Input;
	reg [1:0] actualFloor;

	// Outputs
	wire [1:0] nextMemoryFloor;
	wire BeginEndMemory_Flag;

	// Instantiate the Unit Under Test (UUT)
	switch_input_comparator uut (
		.down_up_Flag(down_up_Flag), 
		.pos0Mem(pos0Mem), 
		.down_up_Input(down_up_Input), 
		.floorCall_Input(floorCall_Input), 
		.actualFloor(actualFloor), 
		.nextMemoryFloor(nextMemoryFloor), 
		.BeginEndMemory_Flag(BeginEndMemory_Flag)
	);

	initial begin
		// Initialize Inputs
		down_up_Flag = 0;
		pos0Mem = 0;
		down_up_Input = 0;
		floorCall_Input = 0;
		actualFloor = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#10
		down_up_Flag = 1; //+
		actualFloor = 00;
		pos0Mem = 10; //
		down_up_Input = 1; //*
		floorCall_Input = 01;
		
	
		#10
		down_up_Flag = 1; //+
		actualFloor = 00;
		pos0Mem = 10; //
		down_up_Input = 0; //*
		floorCall_Input = 01;


		#10
		down_up_Flag = 0; //+
		actualFloor = 01;
		pos0Mem = 00; //
		down_up_Input = 0; //*
		floorCall_Input = 10;
		
		#10
		down_up_Flag = 0; //+
		actualFloor = 11;
		pos0Mem = 01; //
		down_up_Input = 0; //*
		floorCall_Input = 10;

		#10
		down_up_Flag = 1; //+
		actualFloor = 01;
		pos0Mem = 11; //
		down_up_Input = 0; //*
		floorCall_Input = 10;
		
		#10
		down_up_Flag = 0; //+
		actualFloor = 11;
		pos0Mem = 10; //
		down_up_Input = 0; //*
		floorCall_Input = 01;
		
		
		#10 $finish;		
	end
      
endmodule

