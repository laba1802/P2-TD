`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:08:02 04/02/2017 
// Design Name: 
// Module Name:    displayController 
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
module displayController(
	input clk,
	input reset,
    input upDown_Flag,
    input stopGo_Flag,
    input [1:0] actualFloor,
    output [3:0] an,
    output a,
    output b,
    output c,
    output d,
    output e,
    output f,
    output g,
    output dp
    );
	 
	reg [3:0] firstNumber;
	reg [3:0] secondNumber;
	reg [3:0] thirdNumber;
	reg [3:0] fourthNumber; 

	//Primer 7 Segmentos (-, S, b)
	always @ (*) begin
		if (stopGo_Flag) firstNumber = 0; //Guión
		else if (upDown_Flag) firstNumber = 5; //S
		else if(~upDown_Flag) firstNumber = 6; //b
	end

	//Segundo 7 Segmentos (A, C)
	always @ (*) begin
		if(stopGo_Flag) secondNumber = 8;
		else if(~stopGo_Flag) secondNumber = 9;
	end

	//Tercer 7 Segmentos (P)
	always @ (*) begin
		thirdNumber = 7;
	end

	//Cuarto 7 Segmentos (1,2,3,4)
	always @ (*) begin
		case(actualFloor)
			2'b00: fourthNumber = 1;
			2'b01: fourthNumber = 2;
			2'b10: fourthNumber = 3;
			2'b11: fourthNumber = 4;
		endcase
	end

	localparam N = 18;
	 
	reg [N-1:0]count;
 
	always @ (posedge clk or posedge reset)
	 begin
	  if (reset)
	   count <= 0;
	  else
	   count <= count + 1'b1;
	 end
 
	reg [6:0]sseg;
	reg [3:0]an_temp;
	always @ (*)
	 begin
	  case(count[N-1:N-2])
		
	   2'b00 : 
		begin
		 sseg = fourthNumber;
		 an_temp = 4'b1110;
		end
		
	   2'b01:
		begin
		 sseg = thirdNumber;
		 an_temp = 4'b1101;
		end
		
	   2'b10:
		begin
		 sseg = secondNumber;
		 an_temp = 4'b1011;
		end
		 
	   2'b11:
		begin
		 sseg = firstNumber;
		 an_temp = 4'b0111;
		end
	  endcase
	 end
	assign an = an_temp;

	reg [6:0] sseg_temp; 
	always @ (*)
	 begin
	  case(sseg)
	   4'd0 : sseg_temp = 7'b0111111; //Guión
		4'd1 : sseg_temp = 7'b1111001; //1
		4'd2 : sseg_temp = 7'b0100100; //2
		4'd3 : sseg_temp = 7'b0110000; //3
		4'd4 : sseg_temp = 7'b0011001; //4
		4'd5 : sseg_temp = 7'b0010010; //S
		4'd6 : sseg_temp = 7'b0000011; //b
		4'd7 : sseg_temp = 7'b0001100; //P
		4'd8 : sseg_temp = 7'b0001000; //A
		4'd9 : sseg_temp = 7'b1000110; //C
	   default : sseg_temp = 7'b0111111; //Guión
	  endcase
	 end
	assign {g, f, e, d, c, b, a} = sseg_temp; 
	assign dp = 1'b1;

endmodule
