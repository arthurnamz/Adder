`timescale 1ns/1ps

module testbench;
 localparam PERIOD = 2; //2ns

 wire [15:0] opA, opB;
 wire [31:0] result, tmp;

 reg enable, clk=0;


 generator gen_inst(.clk(clk), .enable(enable), .out(tmp) );
 adder add_inst(.streamIn(tmp), .streamOut(result) );

 assign opA = tmp[15:0];
 assign opB = tmp[31:16];

 always #(PERIOD/2) clk = ~clk;

 initial begin
   
   #10 enable = 1;

   #30 enable = 0;
   #10 enable = 1;   
	
 end

 initial begin
   $monitor($time, " opA=%0d   opB=%0d  result=%0d ", opA, opB, result);
   #1000 $finish;
 end

endmodule
