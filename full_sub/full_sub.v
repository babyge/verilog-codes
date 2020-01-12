`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:07:54 01/07/2020 
// Design Name: 
// Module Name:    full_sub 
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
module full_sub(
    input [0:2] a,
    output [0:1] y
    );
	wire d,e,f,g;
	not a1(g,a[0]);
	xor a2(y[0],a[0],a[1],a[2]);
	and a3(d,g,a[1]);
	and a4(e,a[2],a[1]);
	and a5(f,g,a[2]);
	or a6(y[1],d,e,f);
endmodule
