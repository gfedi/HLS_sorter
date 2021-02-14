#include <cstdio>
#include <cstdlib>
#include "src/algo.h"
#include "hls_stream.h"

// random event generation:
// for i in `seq 1 72`; do echo -e "   cand energy $(($RANDOM/16))\t id $i";done

#define NTEST 1

int main() {
	TC input[NTC_IN];
	TC output[NTC_OUT];
	TC output_ref[NTC_OUT];
    int test = 0;
    int ntrunk=0;
    FILE *dump = fopen("pfcands_ttbar.txt","r"); 
    if (!dump) return 3;
    printf("Opened dump file\n");
    while (!feof(dump) && (++test <= NTEST)) {

        for (unsigned int i = 0; i < NTC_IN; ++i) clear(input[i]);

        int ncands, energy, id = 0;
        if (fscanf(dump, "Event with %d candidates\n", &ncands) != 1) return 2;
        for (int i = 0; i < ncands; ++i) {
            if (fscanf(dump, "   cand energy %d\t id %d", &energy, &id) != 2) return 2;
            if (i < NTC_IN) {
                input[i].ene =  int(energy);
                input[i].id = int(id);
            } else { ntrunk++; }
        }
        fscanf(dump, "\n");

        // run the algorithm
        hls::stream<TC> tempi("input");
        //hls::stream<TC> tempo("output");
        ap_axisc tempo;

        for (int i=0; i<100;i++) {
        	TC temp = input[i];
        	if (i<18)  {
        		printf("Input %d\n", (int)temp.ene);
        	} else {
        		clear(temp);
        	}
       		tempi.write(temp);
           	algo_main(tempi,tempo);
        	TC temp0;
        	//tempo.read(temp0);

        	//if ((int)temp0.ene!=2047) printf("Output %d\n", (int)temp0.ene);
        	if ((int)tempo.data!=2047) printf("Output %d\n", (int)tempo.data);

        }
        algo_main_ref(input, output_ref);
        // check the output
        printf("Event with %d particles (%d truncated away)\n", ncands, ntrunk);
        bool ok = true;
        for (int i = 0; i < NTC_OUT; ++i) {
            printf("Item HLS %d\t Ref %d\t - Energy HLS %d\t Ref %d\n",int(output[i].id),int(output_ref[i].id),int(output[i].ene), int(output_ref[i].ene));
        }
        if (!ok) { printf("MISMATCH\n"); return 1; }
        printf("\n");
    }
    printf("Passed all %d tests\n", NTEST);
    return 0;
}
