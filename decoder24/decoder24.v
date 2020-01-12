`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:29:26 01/07/2020 
// Design Name: 
// Module Name:    decoder24 
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
module decoder24(
    input [0:1] a,
    output [0:3] y
    );
	 wire p,q;
	 not n1(p,a[0]);
	 not n2(q,a[1]);
	 and a1(y[0],a[0],a[1]);
	 and a2(y[1],a[0],q);
	 and a3(y[2],p,a[1]);
	 and a4(y[3],p,q);
endmodule
