#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct mystruct_ {
    int a;          // 4 bytes
    double b;       // 8 bytes
    int c;          // 4 bytes
    long long int d;// 8 bytes
} mystruct;

#define COUNT 4

int main(int argc, char **argv) {
    mystruct *p = NULL, *q = NULL;
    void *v = NULL;
    int i = 0;

    printf("size of mystruct = %lu\n", sizeof(mystruct));

    // IMPORTANT NOTE: the size of mystruct is NOT always 
    // 24 bytes! It will vary according to the processor 
    // architecture
	// ...
	// ... because some processor architectures will require 
    // a 'double' (say) to be at an address which is multiple 
    // of 8
	// ...
	// ... so it is very important to make no assumptions 
    // on the size of a structure: ALWAYS use 'sizeof' or 
    // let the compiler use address arithmetic.

    // allocate some memory and clean it out: 'calloc' 
    // is quite useful here
    // Never use magic numbers 
	// p = (mystruct*)calloc(COUNT, 24); // DO NOT DO THIS!
    p = (mystruct *) calloc(COUNT, sizeof(struct mystruct_));

    // initialize it to something interesting using a large 
    // floating point value for the double and a large value for
	// the 64-bit integer
	// this is so we can see where the compiler has inserted 
    // padding space to get the desired alignment for the 8 byte
	// quantities 'b' and 'd'
	for (int i = 0; i < COUNT; i++) {
		p[i].a = i;
		p[i].b = 10000000000.0 + i;
		p[i].c = i * 20;
		p[i].d = 4294967296 + i;
	}
    return 0;
}