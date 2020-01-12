`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:19:25 01/08/2020 
// Design Name: 
// Module Name:    bin2grey_case 
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
module bin2grey_case(
    input [0:3] a,
    output reg [0:3] y
    );
	 always @(a)
	 case (a)
	 4'b0000: y=4'b0000;
	 4'b0001: y=4'b0001;
	 4'b0010: y=4'b0011;
	 4'b0011: y=4'b0010;
	 4'b0100: y=4'b0110;
	 4'b0101: y=4'b0111;
	 4'b0110: y=4'b0101;
	 4'b0111: y=4'b0100;
	 4'b1000: y=4'b1100;
	 4'b1001: y=4'b1101;
	 4'b1010: y=4'b1111;
	 4'b1011: y=4'b1110;
	 4'b1100: y=4'b1010;
	 4'b1101: y=4'b1011;
	 4'b1110: y=4'b1001;
	 4'b1111: y=4'b1000;
endcase;
endmodule
