#include <stdio.h>

#define LENGTH 3
#define COUNT 4

int data[LENGTH] = {0};            // some integers

// basic address arithmetic

int main(int argc, char **agrv) {
    int i           = 0;
    int *p          = NULL;
    int a[COUNT]    = {0};

    printf("Multiple Indirection example\n");

    // print the array
    for (i = 0; i < LENGTH; i++) {
        printf("data[%d] = %d\n", i, data[i]);
    }

    printf("\nInit array\n");

    // initialize our integer array
    for (i = 0; i < LENGTH; i++) {
        data[i] = i;
    }

    // print the array
    for (i = 0; i < LENGTH; i++) {
        printf("data[%d] = %d\n", i, data[i]);
    }

    printf("\n");
    // first let's look at the size of a basic integer
    printf("size of an 'int' is %lu\n", sizeof(int));

    // initialize array
    for(i = 0; i < COUNT; i++) {
        a[i] = i;
    }
    // print the array
    for (i = 0; i < COUNT; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    printf("\n");

    // let's do some pointer arithmetic
    p = a;
    // set the pointer to the array to the start of the array
    printf("address of a is %p; value of p is %p [%u]; value pointed to by p is %d\n", a, p, p, *p);

    // increment p by 1
    // NOTE: the address of 'a' remains the same (because we haven't done anything to it)
    // but the value of 'p' has been incremented by 4 - the size of an integer - and so ...
    // the value pointed to by 'p' is now a[1]
    p = p + 1;
    printf("address of a is %p; value of p is %p [%u]; value pointed to by p is %d\n", a, p, p, *p);

    // increment p by another 2 the value pointed to by 'p' is now a[3]
	p = p + 2;
    printf("address of a is %p; value of p is %p [%u]; value pointed to by p is %d\n", a, p, p, *p);

    // what happens if we go beyond the array end? there's nothing to stop you or warn you ...
	// ... so, increment p by another 1 the value pointed to by 'p' is now a[4]
	// ... but we will get junk
	p = p + 1;
	printf("address of a is %p; value of p is %p [%u]; value pointed to by p is %d\n", a, p, p, *p);

    return 0;
}
