/**************************************
*
* To print one word per line
*
***************************************/

#include <stdio.h>
#include <stdlib.h>

#define IN  1            /* Inside a word  */
#define OUT 0            /* Outside a word */

int main()
{
    int c     = 0;
    int state = OUT;
    
    while((c = getchar()) != EOF) {
        if( ' ' == c || '\t' == c || '\n' == c) {
            if ( IN == state) {
                putchar('\n');
                state = OUT;
            }
        } else if (OUT == state) {
                state = IN;
                putchar(c);
        } else 
            putchar(c);
    }
    return EXIT_SUCCESS;
}
        
