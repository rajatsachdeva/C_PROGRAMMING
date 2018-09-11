/*************************************************
*
* To count words, newlines and characters
*
**************************************************/

#include <stdio.h>
#include <stdlib.h>

#define IN  1           /* Inside a word  */
#define OUT 0           /* Outside a word */

int main()
{
    int c     = 0;
    int nl    = 0;
    int nc    = 0;
    int nw    = 0;
    int state = OUT;

    while((c = getchar()) != EOF) {
        nc++;           /* Increment number of characters */
        if('\n' == c)
            nl++;
        else if (' ' == c || '\t' == c || '\n' == c)
            state = OUT;
        else if (OUT == state) {
            state = IN;
            nw++;
        }        
    }
   
    printf("\nNewlines words characters\n");
    printf("%8d%6d%11d\n",nl,nw,nc);
    return EXIT_SUCCESS;
}
