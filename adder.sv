module adder
(
 input [31:0] streamIn,
 output reg [31:0] streamOut
);

always@(streamIn)
begin
 streamOut <= streamIn[31:16] + streamIn[15:0];
end

endmodule
