#include <stdio.h>

#define LENGTH 3

int data[LENGTH];       // some integers
char *words[LENGTH];    // some strings

int main(int argc, char **argv) {
    void    *gp = NULL;           // a generic pointer
    int     i   = 0;

    printf("generic pointer example\n");

    // initialize our integer array
    for (i = 0; i < LENGTH; i++) {
        data[i] = i;
    }
    for (i = 0; i < LENGTH; i++) {
        printf("%d\n", data[i]);
    }

    // initialize our string array
    words[0] = "zero";
    words[1] = "one";
    words[2] = "two";
    for (i = 0; i < LENGTH; i++) {
        printf("%s\n", words[i]);
    }

    /* C: Example of a generic pointer */
    // set the generic pointer to the start of the integer array
    gp = data;

    // and print it out - note that a case is not needed here
    printf("\ndata array address is %p\n", gp);
    
    // now print the first iterm in the array 
    // - A cast is now needed to let the compiler know what 
    // sort of thing is being pointed to by the generic pointer
    printf("item pointed to by gp is now %d\n", *(int*)gp);

    // set the generic pointer to the start of the string array
    gp = words;

    // and print it out - nore that cast is not needed
    printf("\ndata array address is %p\n", gp);

    // now print the first iterm in the array 
    // - A cast is now needed to let the compiler know what 
    // sort of thing is a pointer to pointer
    printf("item pointed to by gp is now %s\n", *(char**)gp);

    // the cast tells the compiler what the address type is 
    // and so we can do address arthimetic
    gp = (char **)gp + 1;
    printf("item pointed to by gp is now %s\n", *(char**)gp);

    return 0;
}
