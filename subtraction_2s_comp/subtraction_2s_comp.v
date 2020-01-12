`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:44:38 01/10/2020 
// Design Name: 
// Module Name:    subtraction_2s_comp 
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
module subtraction_2s_comp(
    input [0:3] a,
    input [0:3] b,
    output reg [0:4] y
    );
	 integer cy;
	 always@(a,b)
	 begin
	 if(a>b)
	 begin
	 y=((~b+1)+a);
	 if(y[0]==1)
	 y={y[1],y[2],y[3],y[4]};
	 end
	 else
	 begin
	 y=((~a+1)+b);
	 if(y[0]==1)
	 y={y[1],y[2],y[3],y[4]};
	 end
	 end
endmodule
