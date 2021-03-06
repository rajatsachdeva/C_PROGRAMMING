#include <stdio.h>

/* EOF cannot be stored in char type as EOF is -1. 
   So we need a value big enough to store the EOF.
   EOF is basically used to identify the end of 
   valid input.
 */


/* copy input to output */
int main() {
    int c; /* int is used in place of char */

    c = getchar();
    while(c != EOF) {
        putchar(c);
        c = getchar();
    }
    return 0;
}
