#include "generator.h"

int sc_main( int argc, char* argv[] )
{
 generator dut("generator");
 
 //signal declaration
 sc_signal<sc_logic> clk;
 sc_signal<sc_logic> enable;
 sc_signal<sc_lv<32> > out;

 dut.clk(clk);
 dut.enable(enable);
 dut.out(out);

 //waveform declaration
 sc_trace_file *wf = sc_create_vcd_trace_file("generator");

 //adding signals to the waveform
 sc_trace(wf, clk, "clk");
 sc_trace(wf, enable, "enable");
 sc_trace(wf, out, "out");
 
 sc_time t1(1, SC_NS);

 clk =SC_LOGIC_1;
 //clk.write(SC_LOGIC_1);
 sc_start(t1);
 clk =SC_LOGIC_0;
 //clk.write(SC_LOGIC_0);
 sc_start(t1);

 enable = SC_LOGIC_1;

 clk =SC_LOGIC_1;
 sc_start(t1);
 clk =SC_LOGIC_0;
 sc_start(t1);
 
 clk =SC_LOGIC_1;
 sc_start(t1);
 clk =SC_LOGIC_0;
 sc_start(t1);

 clk =SC_LOGIC_1;
 sc_start(t1);
 clk =SC_LOGIC_0;
 sc_start(t1);

 enable = SC_LOGIC_1;
 
 clk =SC_LOGIC_1;
 sc_start(t1);
 clk =SC_LOGIC_0;
 sc_start(t1);
 
 clk =SC_LOGIC_1;
 sc_start(t1);
 clk =SC_LOGIC_0;
 sc_start(t1);

 clk =SC_LOGIC_1;
 sc_start(t1);
 clk =SC_LOGIC_0;
 sc_start(t1);
 sc_close_vcd_trace_file(wf);
 return 0;
}
