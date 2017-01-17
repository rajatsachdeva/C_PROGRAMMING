/*************************************************
*
* To replace multiple blanks in a string with 
* a single blank.
*
*************************************************/

#include <stdio.h>
#include <stdlib.h>

#define NONBLANK 'a'

int main()
{
    int c, lastc;
    
    lastc = NONBLANK;
    
    while((c = getchar()) != EOF) {
        if(' ' != c)
            putchar(c);
        else 
            if(' ' != lastc)
                putchar(c);
        lastc = c;
    }
    return EXIT_SUCCESS;
}
