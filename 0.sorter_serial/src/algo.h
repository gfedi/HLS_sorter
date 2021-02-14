#ifndef ALGO_H
#define ALGO_H

#include "data.h"
#include "hls_stream.h"

void algo_main(hls::stream<TC> &input, ap_axisc &output_axi);

void algo_main_ref(const TC input[NTC_IN], TC output[NTC_OUT]) ;


#endif
