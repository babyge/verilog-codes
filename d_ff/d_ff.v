`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:44:21 01/10/2020 
// Design Name: 
// Module Name:    d_ff 
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
module d_ff(
    input d,
    input clk,
    input clear,
    output reg y
    );
	 always@(posedge clk)
	 begin
	 if(clear)
	 y=1'b0;
	 else
	 y=d;
	 end


endmodule
