#include <stdio.h>

/* EOF cannot be stored in char type as EOF is -1. 
   So we need a value big enough to store the EOF.
   EOF is basically used to identify the end of 
   valid input.
 */


/* copy input to output, Second Version */
int main() {
    int c; /* int is used in place of char */

    while((c = getchar()) != EOF) {
        putchar(c);
    }
    return 0;
}
