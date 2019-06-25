#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COUNT   4

int a[COUNT];
float b[COUNT];
double c[COUNT];
long long int d[COUNT];
short int e[COUNT];
long int f[COUNT];

// illustrate the different amounts that are added to an address
// by C's address arithmetic
int main(int argc, char **argv) {
    int             i   = 0;
    int             *pa = NULL;
    float           *pb = NULL;
    double          *pc = NULL;
    long long int   *pd = NULL;
    short int       *pe = NULL;
    long int        *pf = NULL;

    // first let's look at the sizes of our array types
    printf("sizes are: int %lu; float %lu; double %lu; long long int %lu; short int %lu; long int %lu\n", sizeof(int),
		sizeof(float), sizeof(double), sizeof(long long int), sizeof(short int), sizeof(long int));

    // NOTE: because of historical reasons a plain 'int' can vary in size 
    // between machine architectures. On some microprocessors 
    // it is 2 bytes long while on Intel processors it is 4 bytes
	// if we want to be explicit (and more portable), 
    // then use 'long int' for a 32 bit integer instead of just 'int'

    // initialize our array and pointers 
    pa = a;
	pb = b;
	pc = c;
	pd = d;
	pe = e;
	pf = f;
	for (i = 0; i < COUNT; i++) {
		a[i] = i;
		b[i] = (float)i;
		c[i] = (double)i;
		d[i] = i;
		e[i] = i;
		f[i] = i;
	}

    printf("address of a is %p [%u]; value of pa is %p [%u]; value pointed to by pa is %d\n", a, a, pa, pa, *pa);
	printf("address of b is %p [%u]; value of pb is %p [%u]; value pointed to by pb is %f\n", b, b, pb, pb, *pb);
	printf("address of c is %p [%u]; value of pc is %p [%u]; value pointed to by pc is %f\n", c, c, pc, pc, *pc);
	printf("address of d is %p [%u]; value of pd is %p [%u]; value pointed to by pd is %lld\n", d, d, pd, pd, *pd);
	printf("address of e is %p [%u]; value of pe is %p [%u]; value pointed to by pe is %hd\n", e, e, pe, pe, *pe);
	printf("address of f is %p [%u]; value of pf is %p [%u]; value pointed to by pf is %ld\n", f, f, pf, pf, *pf);
    printf("\n p + 1\n");
    // let's do some arithmetic
	pa += 1;
	pb += 1;
	pc += 1;
	pd += 1;
	pe += 1;
	pf += 1;
	// and print out the results ...
	// NOTE: the addresses have been increased by the correct amount 4 for 'int',
    // 'float' and 'long int' 8 for 'double' and 'long long int' 
    // and 2 for 'short int'
	printf("address of a is %p [%u]; value of pa is %p [%u]; value pointed to by pa is %d\n", a, a, pa, pa, *pa);
	printf("address of b is %p [%u]; value of pb is %p [%u]; value pointed to by pb is %f\n", b, b, pb, pb, *pb);
	printf("address of c is %p [%u]; value of pc is %p [%u]; value pointed to by pc is %f\n", c, c, pc, pc, *pc);
	printf("address of d is %p [%u]; value of pd is %p [%u]; value pointed to by pd is %lld\n", d, d, pd, pd, *pd);
	printf("address of e is %p [%u]; value of pe is %p [%u]; value pointed to by pe is %hd\n", e, e, pe, pe, *pe);
	printf("address of f is %p [%u]; value of pf is %p [%u]; value pointed to by pf is %ld\n", f, f, pf, pf, *pf);

    return 0;
}
