#include "algo.h"
#include <cmath>
#include "hls_stream.h"
#include <cassert>
#include "ap_axi_sdata.h"

void null(hls::stream<TC> &in, hls::stream<TC> &out) {
	static TC regist={2047,0};
	TC in_a = in.read();
	out.write(in_a);
}


void cell0(hls::stream<TC> &in, hls::stream<TC> &out) {
	static TC regist={2047,0};
	TC in_a = in.read();
	if (in_a.ene<regist.ene) {
		out.write(regist);
		regist=in_a;
	} else {
		out.write(in_a);
	}
}

void cell1(hls::stream<TC> &in, hls::stream<TC> &out) {
	static TC regist={2047,0};
	TC in_a = in.read();
	if (in_a.ene<regist.ene) {
		out.write(regist);
		regist=in_a;
	} else {
		out.write(in_a);
	}
}

void cell2(hls::stream<TC> &in, hls::stream<TC> &out) {
	static TC regist={2047,0};
	TC in_a = in.read();
	if (in_a.ene<regist.ene) {
		out.write(regist);
		regist=in_a;
	} else {
		out.write(in_a);
	}
}

void cell3(hls::stream<TC> &in, hls::stream<TC> &out) {
	static TC regist={2047,0};
	TC in_a = in.read();
	if (in_a.ene<regist.ene) {
		out.write(regist);
		regist=in_a;
	} else {
		out.write(in_a);
	}
}

void cell4(hls::stream<TC> &in, hls::stream<TC> &out) {
	static TC regist={2047,0};
	TC in_a = in.read();
	if (in_a.ene<regist.ene) {
		out.write(regist);
		regist=in_a;
	} else {
		out.write(in_a);
	}
}

void cell5(hls::stream<TC> &in, hls::stream<TC> &out) {
	static TC regist={2047,0};
	TC in_a = in.read();
	if (in_a.ene<regist.ene) {
		out.write(regist);
		regist=in_a;
	} else {
		out.write(in_a);
	}
}

void cell6(hls::stream<TC> &in, hls::stream<TC> &out) {
	static TC regist={2047,0};
	TC in_a = in.read();
	if (in_a.ene<regist.ene) {
		out.write(regist);
		regist=in_a;
	} else {
		out.write(in_a);
	}
}

void cell7(hls::stream<TC> &in, hls::stream<TC> &out) {
	static TC regist={2047,0};
	TC in_a = in.read();
	if (in_a.ene<regist.ene) {
		out.write(regist);
		regist=in_a;
	} else {
		out.write(in_a);
	}
}

void cell8(hls::stream<TC> &in, hls::stream<TC> &out) {
	static TC regist={2047,0};
	TC in_a = in.read();
	if (in_a.ene<regist.ene) {
		out.write(regist);
		regist=in_a;
	} else {
		out.write(in_a);
	}
}

void cell9(hls::stream<TC> &in, hls::stream<TC> &out) {
	static TC regist={2047,0};
	TC in_a = in.read();
	if (in_a.ene<regist.ene) {
		out.write(regist);
		regist=in_a;
	} else {
		out.write(in_a);
	}
}

void cell10(hls::stream<TC> &in, hls::stream<TC> &out) {
	static TC regist={2047,0};
	TC in_a = in.read();
	if (in_a.ene<regist.ene) {
		out.write(regist);
		regist=in_a;
	} else {
		out.write(in_a);
	}
}

void cell11(hls::stream<TC> &in, hls::stream<TC> &out) {
	static TC regist={2047,0};
	TC in_a = in.read();
	if (in_a.ene<regist.ene) {
		out.write(regist);
		regist=in_a;
	} else {
		out.write(in_a);
	}
}

void cell12(hls::stream<TC> &in, hls::stream<TC> &out) {
	static TC regist={2047,0};
	TC in_a = in.read();
	if (in_a.ene<regist.ene) {
		out.write(regist);
		regist=in_a;
	} else {
		out.write(in_a);
	}
}

void cell13(hls::stream<TC> &in, hls::stream<TC> &out) {
	static TC regist={2047,0};
	TC in_a = in.read();
	if (in_a.ene<regist.ene) {
		out.write(regist);
		regist=in_a;
	} else {
		out.write(in_a);
	}
}

void cell14(hls::stream<TC> &in, hls::stream<TC> &out) {
	static TC regist={2047,0};
	TC in_a = in.read();
	if (in_a.ene<regist.ene) {
		out.write(regist);
		regist=in_a;
	} else {
		out.write(in_a);
	}
}

void cell15(hls::stream<TC> &in, hls::stream<TC> &out) {
	static TC regist={2047,0};
	TC in_a = in.read();
	if (in_a.ene<regist.ene) {
		out.write(regist);
		regist=in_a;
	} else {
		out.write(in_a);
	}
}

void cell16(hls::stream<TC> &in, hls::stream<TC> &out) {
	static TC regist={2047,0};
	TC in_a = in.read();
	if (in_a.ene<regist.ene) {
		out.write(regist);
		regist=in_a;
	} else {
		out.write(in_a);
	}
}

void cell17(hls::stream<TC> &in, hls::stream<TC> &out) {
	static TC regist={2047,0};
	TC in_a = in.read();
	if (in_a.ene<regist.ene) {
		out.write(regist);
		regist=in_a;
	} else {
		out.write(in_a);
	}
}



void algo_main(hls::stream<TC> &input, ap_axisc &output_axi) {

	static hls::stream<TC> fifone;
	#pragma HLS stream variable=fifone depth=100

	#pragma HLS interface axis  port=output_axi
	#pragma HLS dataflow

	hls::stream<TC> out0("out0_stream");
	hls::stream<TC> out1("out1_stream");
	hls::stream<TC> out2("out2_stream");
	hls::stream<TC> out3("out3_stream");
	hls::stream<TC> out4("out4_stream");
	hls::stream<TC> out5("out5_stream");
	hls::stream<TC> out6("out6_stream");
	hls::stream<TC> out7("out7_stream");
	hls::stream<TC> out8("out8_stream");
	hls::stream<TC> out9("out9_stream");
	hls::stream<TC> out10("out10_stream");
	hls::stream<TC> out11("out11_stream");
	hls::stream<TC> out12("out12_stream");
	hls::stream<TC> out13("out13_stream");
	hls::stream<TC> out14("out14_stream");
	hls::stream<TC> out15("out15_stream");
	hls::stream<TC> out16("out16_stream");
	hls::stream<TC> output("ouput_stream");



	cell0(input, out0);
	cell1(out0, out1);
	cell2(out1, out2);
	cell3(out2, out3);
	cell4(out3, out4);
	cell5(out4, out5);
	cell6(out5, out6);
	cell7(out6, out7);
	cell8(out7, out8);
	cell9(out8, out9);
	cell10(out9, out10);
	cell11(out10, out11);
	cell12(out11, out12);
	cell13(out12, out13);
	cell14(out13, out14);
	cell15(out14, out15);
	cell16(out15, out16);
	cell17(out16, output);

	TC tc_out = output.read();
	fifone.write(tc_out);
	fifone.write(tc_out);
	output_axi.data=fifone.read().ene;
	output_axi.user=1;
	output_axi.last=0;


}



