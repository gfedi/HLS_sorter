#include "src/algo.h"
#include <cmath>



void algo_main_ref(const TC input[NTC_IN], TC output[NTC_OUT]) {
	TC temp[NTC_IN];
    for (unsigned int j = 0; j < NTC_IN; ++j) {
    	temp[j] = input[j];
    }
    for (unsigned int j = 0; j < NTC_IN; ++j) {
        for (unsigned int j2 = j+1; j2 < NTC_IN; ++j2) {
            if (temp[j2].ene > temp[j].ene) {
                std::swap(temp[j], temp[j2]);
            }
        }
    }
    for (unsigned int j = 0; j < NTC_OUT; ++j) {
    	output[j] = temp[j];
    }
}

