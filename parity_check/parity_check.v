`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:21:12 01/10/2020 
// Design Name: 
// Module Name:    parity_check 
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
module parity_check(
    input [0:7] a,
    output reg y
    );
	 integer c,i;
	 initial c=1'b0;
	 always @(a)
	 begin
	 for(i=0;i<8;i=i+1)
	 begin
	 if(a[i]==1)
	 c=c+1;
	 end
	 if(c%2==0)
	 y=1'b0;
	 else
	 y=1'b1;
	 end
	 
	 
endmodule
