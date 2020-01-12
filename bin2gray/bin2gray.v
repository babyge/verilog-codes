`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:07:13 01/08/2020 
// Design Name: 
// Module Name:    bin2gray 
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
module bin2gray(
    input [0:3] a,
    output [0:3] y
    );
	 assign y[0]=a[0];
	 xor x1(y[1],a[0],a[1]);
	 xor x2(y[2],a[1],a[2]);
	 xor x3(y[3],a[2],a[3]);

endmodule
