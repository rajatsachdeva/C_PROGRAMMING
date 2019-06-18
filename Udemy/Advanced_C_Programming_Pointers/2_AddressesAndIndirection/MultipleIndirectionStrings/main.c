#include <stdio.h>

#define LENGTH 3

char *words[LENGTH];        // some strings

int main (int argc, char **argv) {
    char *pc    = NULL; // a pointer to a character
    char **ppc  = NULL; // a pointer to a pointer to a character
    int  i      = 0;

    printf("Multiple Inderiction with Strings example\n");

    // Initialize and print string array
    words[0] = "zero";
    words[1] = "one";
    words[2] = "two";

    for (i = 0; i < LENGTH; i++) {
        printf("words[%d] = %s\n", i, words[i]);
    }

    /* B: a pointer to an array of strings
     *     - same as pointer to pointer to character
     */
    ppc = words;        // initialize the pointer to a pointer to a character
    for (i = 0; i < LENGTH; i++) {
        ppc = words + i ;
        pc = *ppc;
        while(*pc != '\0') {
            printf("%c", *pc);
            pc += 1;
        }
        printf("\n");
    }
    
    return 0;
}