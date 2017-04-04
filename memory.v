`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:51:24 04/01/2017 
// Design Name: 
// Module Name:    memory 
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
module memory(
	 input clk,
    input [2:0] buttonFloor_Input,
    input [1:0] buttonFloor_FirstLast_Flag,
    input [2:0] switchFloor_Input,
    input [1:0] switchFloor_FirstLast_Flag,
    input deletePos0,
    output reg [1:0] Pos0
    );
	 
	 reg [2:0] my_memory [0:9];

	 initial begin
	 for (i=0; i<10; i=i+1)
		begin
			my_memory[i] = 3'b100;
		end
		//$readmemb("floor.list", my_memory,0,9);
	 end
	 
	  
	 reg [2:0] concat;
	 reg [1:0] memPos0;
	 integer  i;
	 reg flag;
	 always @ (posedge clk) begin
	 //$display("PRUEBA\t %b\t",buttonFloor_FirstLast_Flag,buttonFloor_Input,switchFloor_Input,switchFloor_FirstLast_Flag,deletePos0);
		if(deletePos0 && ~my_memory[0][2]) begin
			//$display("entroooo!!!!!!!!!!!!!!!!!!!!!!!");
			for(i = 0; i < 9; i = i + 1) begin
				my_memory[i] <= my_memory[i+1];
				//$display("entro %b\t",my_memory[i]);
			end
			my_memory[9] <= 100;
			memPos0 = {my_memory[0][1],my_memory[0][0]};
			Pos0 = memPos0;
			$display("1MEM0 ",Pos0);
		end else begin	
		$display("WWWWWW!!!!!!!!!!!!!!!!!!!!!!!",buttonFloor_FirstLast_Flag,buttonFloor_Input,switchFloor_Input,switchFloor_FirstLast_Flag,deletePos0);
			if(buttonFloor_FirstLast_Flag[1]) begin
				if(buttonFloor_FirstLast_Flag[0] && ~buttonFloor_Input[2]) begin
					for(i = 9; i > 0; i = i - 1) begin
					my_memory[i] <= my_memory[i-1];
					end
					concat = {0,buttonFloor_Input};
					my_memory[0] <= concat;
					Pos0 = my_memory[0];
					$display("2MEM0 ",Pos0);
				end else if(~buttonFloor_FirstLast_Flag[0] && ~buttonFloor_Input[2]) begin
				$display("3MEM0!!! ",buttonFloor_Input);
					flag = 1;
					for(i = 0; i < 10; i = i + 1) begin
						if(my_memory[i][2] == 1 && flag) begin
							//$display("entro");
							concat = {0,buttonFloor_Input};
							my_memory[i] <= buttonFloor_Input;
							flag = 0;
						end
					end
					memPos0 = {my_memory[0][1],my_memory[0][0]};
					Pos0 = memPos0;
					$display("3MEM0 ",Pos0);
				end else if(switchFloor_FirstLast_Flag[1] && ~switchFloor_Input[2]) begin
					if(switchFloor_FirstLast_Flag[0]) begin
						for(i = 9; i > 0; i = i - 1) begin
						my_memory[i] <= my_memory[i-1];
						end
						concat = {0,switchFloor_Input};
						my_memory[0] <= concat;
						Pos0 = my_memory[0];
						$display("4MEM0 ",Pos0);
					end else if(~switchFloor_FirstLast_Flag[0] && ~switchFloor_Input[2]) begin
						flag = 1;
						for(i = 0; i < 10; i = i + 1) begin
							if(my_memory[i][2] == 1 && flag) begin
								my_memory[i] <= switchFloor_Input;
								flag = 0;
							end
						end
						memPos0 = {my_memory[0][1],my_memory[0][0]};
						Pos0 = memPos0;
						$display("5MEM0 ",Pos0);
					end
				end
			end
		 end
	 end
	 
	 /*
	 reg [1:0] memPos0;
	 always @ * begin
		memPos0 = {my_memory[0][1],my_memory[0][0]};
		Pos0 = memPos0;
	 end
*/

endmodule
