#include<systemc.h>

SC_MODULE(generator)
{
 sc_in<sc_logic> clk;
 sc_in<sc_logic> enable;
 sc_out< sc_lv<32> > out;
 
 sc_uint<32> count = 0;

 void generate();

 SC_CTOR(generator)
 {
   SC_METHOD(generate);
   sensitive << clk.pos();
 }
};
