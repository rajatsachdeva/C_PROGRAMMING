#include <stdio.h>

#define LENGTH 3

int data[LENGTH];           // some integers

int main(int argc, char **argv) {
    int *pi     = NULL;     // a simple pointer to an integer
    int **ppi   = NULL;     // a pointer to a pointer to an integer
    int i       = 0; 

    printf("Multiple Indirection example\n");

    // initialize our integer array
    for (i = 0; i < LENGTH; i++) {
        data[i] = i;
    }

    // print the array
    for (i = 0; i < LENGTH; i++) {
        printf("data[%d] = %d\n", i, data[i]);
    }

    // A: Simple pointer to a pointer to an integer
    pi = data;      // set the pointer to start of integer array
    ppi = &pi;      // and set the pointer to pointer to address of pi

    for (i = 0; i < LENGTH; i++) {
        printf("\naddress of data[%d] is %p\n", i, &data[i]);
        printf("item pointed to by pi is %d\n", *pi);
        printf("item pointed to by ppi is %p (address of pi %p)\n", *ppi, &pi);
        printf("item pointed to by double indrection of ppi is %d\n", **ppi);
        printf("The address of pi is %p and the value of ppi (what it points to) is %p \n\n", &pi, ppi);

        pi += 1; // advance the pointer to point to next element of the data array 
    }

    return 0;
}