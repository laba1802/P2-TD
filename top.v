`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:12:07 04/02/2017 
// Design Name: 
// Module Name:    top 
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
module top(
    input switch_Up_First,
    input switch_Up_Second,
    input switch_Down_Second,
    input switch_Up_Third,
    input switch_Down_Third,
    input switch_Down_Fourth,
    input clk,
    input button_FirstFloor,
    input button_SecondFloor,
    input button_ThirdFloor,
    input button_FourthFloor,
    input reset,
	 output a,b,c,d,e,f,g,dp,
	 output [3:0] an,
	 output [1:0] actualFloor
    );
	 
	 wire [1:0] floor_call_Switch;
	 wire [1:0] floor_destiny;
	 wire [1:0] pos0Mem;
	 wire [2:0] nextMemFloor_Button;
	 wire [2:0] nextMemFloor_Switch;
	 //wire [1:0] actualFloor;
	 wire [2:0] floor_destiny_Button;
	 wire [1:0] beginEndMemory_Flag_Button;
	 wire [1:0] beginEndMemory_Flag_Switch;
	 
	 buttons_controller controller(
	 .first_up(switch_Up_First),
	 .second_down(switch_Down_Second),
	 .second_up(switch_Up_Second),
	 .third_down(switch_Down_Third),
	 .third_up(switch_Up_Third),
	 .fourth_down(switch_Down_Fourth),
	 .floor_call(floor_call_Switch),
	 .up_down_flag(up_down_flag_Switch)
	 );
	 
	 numberFloor_controller numberFloor(
	 .button1(button_FirstFloor),
	 .button2(button_SecondFloor),
	 .button3(button_ThirdFloor),
	 .button4(button_FourthFloor),
	 .floor_destiny(floor_destiny_Button)
	 );

	 floor_input_comparator comp3(
	 .floor_destiny_Input(floor_destiny_Button),
	 .pos0Mem(pos0Mem),
	 .actualFloor(actualFloor),
	 .down_up_Flag(down_up_Flag),
	 .beginEndMemory_Flag(beginEndMemory_Flag_Button),
	 .nextMemoryFloor(nextMemFloor_Button)
	 );
	 
	 switch_input_comparator comp2(
	 .down_up_Flag(down_up_Flag),
	 .pos0Mem(pos0Mem),
	 .down_up_Input(up_down_flag_Switch),
	 .floorCall_Input(floor_call_Switch),
	 .actualFloor(actualFloor),
	 .nextMemoryFloor(nextMemFloor_Switch),
	 .BeginEndMemory_Flag(beginEndMemory_Flag_Switch)
	 );
	 
	 memory mem(
	 .clk(clk),
	 .buttonFloor_Input(nextMemFloor_Button),
	 .buttonFloor_FirstLast_Flag(beginEndMemory_Flag_Button),
	 .switchFloor_Input(nextMemFloor_Switch),
	 .switchFloor_FirstLast_Flag(beginEndMemory_Flag_Switch),
	 .deletePos0(deletePos_O),
	 .Pos0(pos0Mem)
	 );
	 
	 floor_comparator comp1(
	 .actualFloor(actualFloor),
	 .pos0Mem(pos0Mem),
	 .down_upFlag(down_up_Flag),
	 .stop_goFlag(stop_go_Flag),
	 .deletePos0(deletePos0)
	 );
	 
	 stateMachine2 fsm(
	 .CLK(clk),
	 .RST(reset),
	 .stop_go(stop_go_Flag),
	 .up_down(down_up_Flag),
	 .deletePos0(deletePos0),
	 .deletePos_O(deletePos_O),
	 .output_floor(actualFloor)
	 );
	 
	 displayController deco(
	 .clk(clk),
	 .reset(reset),
	 .upDown_Flag(down_up_Flag),
	 .stopGo_Flag(stop_go_Flag),
	 .actualFloor(actualFloor),
	 .an(an),
	 .a(a),
	 .b(b),
	 .c(c),
	 .d(d),
	 .e(e),
	 .f(f),
	 .g(g),
	 .dp(dp)
	 );
endmodule
