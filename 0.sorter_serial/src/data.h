#ifndef ALGO_DATA_H
#define ALGO_DATA_H

#include "ap_int.h"

typedef ap_uint<11>  energy_t;
typedef ap_uint<8>  idx_t;


struct TC {
	energy_t ene;
	idx_t id;
};
inline void clear(TC & p) {
    p.ene = 0;
    p.id = 0;
}

struct ap_axisc {
	ap_int<32>   data;
	ap_uint<1>   user;
	ap_uint<1>   last;
	//ap_uint<TI>  id;
	//ap_uint<D/8> keep;
	//ap_uint<D/8> strb;
};

#define NTC_IN 72
#define NTC_OUT 72


#endif
