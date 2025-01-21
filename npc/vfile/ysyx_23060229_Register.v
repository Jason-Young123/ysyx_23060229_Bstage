
//33 registers(include pc) in total, each of which contains 32 bits
module ysyx_23060229_Register #(ADDR_WIDTH = 5, DATA_WIDTH = 32)(
    input clk,
    input rst,
	input wen,
    input [DATA_WIDTH-1:0] din,
	input [DATA_WIDTH-1:0] pcin,//pc for update
	input [ADDR_WIDTH-1:0] addr_in,addr_out1,addr_out2,
    output [DATA_WIDTH-1:0] dout1,dout2,
    output reg[DATA_WIDTH-1:0] pc,
	output reg[DATA_WIDTH-1:0] Reg [2**ADDR_WIDTH-1:0]
);
    /* verilator lint_off UNUSEDSIGNAL */
    //reg [DATA_WIDTH-1:0] Reg [2**ADDR_WIDTH-1:0];
	
	//reg [DATA_WIDTH-1:0] pc;

	assign dout1 = Reg[addr_out1];
	assign dout2 = Reg[addr_out2];


    always @(posedge clk) begin
		if(rst) begin
			$display("Register resetting ...");
            $readmemh("resource/reg.hex",Reg);
			pc <= 32'h30000000;//pc reset
		end
		else begin 
			pc <= pcin;//pc updated
			if(wen)
            	Reg[addr_in] <= din;
			Reg[0] <= 0;//a must
        end
    end

endmodule       

