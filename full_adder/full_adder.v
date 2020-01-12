`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:44:28 01/07/2020 
// Design Name: 
// Module Name:    full_adder 
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
module full_adder(
    input [0:2] a,
    output [0:1] y
    );
	wire d,e,f,g,h;
	xor x1(y[0],a[0],a[1],a[2]);
	and x2(d,a[0],a[1]);
	and x3(e,a[2],a[1]);
	and x4(f,a[0],a[2]);
	or x5(y[1],d,e,f);
endmodule
