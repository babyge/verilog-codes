`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:16:23 01/07/2020 
// Design Name: 
// Module Name:    encoder42 
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
module encoder42(
    input [3:0] a,
    output [1:0] y
    );
	 or a1(y[0],a[0],a[1]);
	 or a2(y[1],a[0],a[2]);
endmodule
