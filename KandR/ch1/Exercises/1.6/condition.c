/*************************************
*
* To verify the Expression
* getchar() != EOF is 0 or 1.
*
*************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;              /* 1. why int is used here ? */

    while(c = getchar() != EOF)
        printf("%d\n", c);
    printf("%d ----- at EOF \n", c);
    
    return EXIT_SUCCESS;
}

/* 
    The expression c = getchar() != EOF
    is equivalent to 
                  c = (getchar() != EOF)
    when the expression is true then c is 1
    other wise it's 0.
    
    Expression will be true only when there 
    is some input from standard input 
*/
