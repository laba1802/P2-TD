`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:37:48 03/15/2017
// Design Name:   state_machine
// Module Name:   D:/Proyectos/Proyecto2Taller/state_machine_tb.v
// Project Name:  Proyecto2Taller
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: state_machine
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module state_machine_tb;

	// Inputs
	reg CLK;
	reg RST;
	reg stop_go;
	reg up_down;
	reg [1:0] floor;

	// Outputs
	wire [2:0] output_floor;

	// Instantiate the Unit Under Test (UUT)
	state_machine uut (
		.CLK(CLK), 
		.RST(RST), 
		.stop_go(stop_go), 
		.up_down(up_down), 
		.floor(floor), 
		.output_floor(output_floor)
	);

	initial begin
		// Initialize Inputs
		$display("StopGo UpDown Estado Final");
		$monitor("%b %b %b",stop_go,up_down,output_floor);
		CLK = 0;
		RST = 1;
		stop_go = 0;
		up_down = 0;
		floor = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#0
		RST = 0;
		
		#10
		up_down = 1;
		stop_go = 0;
		
		#10
		up_down = 0;
		stop_go = 1;
		
		#10
		up_down = 1;
		stop_go = 0;
		
		#10
		up_down = 0;
		stop_go = 0;

		#10
		up_down = 1;
		stop_go = 0;		
		
		#10
		up_down = 0;
		stop_go = 0;
		
		#10
		up_down = 0;
		stop_go = 0;

		
		#10 $finish;
	end
	
	always begin
		#5  CLK = ~CLK; 
	end

endmodule

