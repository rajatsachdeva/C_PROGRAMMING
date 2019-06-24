#include <stdio.h>

#define LENGTH 3

int data[LENGTH] = {0};            // some integers

int main(int argc, char **agrv) {
    int *pi         = NULL; // a simple pointer to an integer
    int **ppi       = NULL; // a pointer to a pointer to an integer
    int i           = 0;

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

    return 0;
}
