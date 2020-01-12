`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:58:30 01/07/2020 
// Design Name: 
// Module Name:    half_sub 
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
module half_sub(
    input [0:1] a,
    output [0:1] y
    );
	 wire d;
	 not a0(d,a[0]);
	 xor a1(y[0],a[0],a[1]);
	 and a2(y[1],d,a[1]);
endmodule
