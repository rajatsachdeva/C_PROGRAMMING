#include <stdio.h>

/*
 * This Program displays any arguments 
 * that were passed to it
 */

 int main(int argc, char **argv) {
     int i = 0;
     
     // iterate over array of args
     for (i = 0; i < argc; i++) {
         printf("arg %d is %s\n", i, argv[i]);
     }
     printf("\n\n");

     // dereference each string arg (*argv) via pointer to pointer
     // to the start of the array of args (**argv)
    for (i = 0; i < argc; i++) {
        printf("arg is %d is %s\n", i, *argv);
        argv += 1;
    }
     return 0;
 }