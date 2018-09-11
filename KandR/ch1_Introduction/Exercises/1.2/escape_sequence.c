/***************************************
* This program depicts if an invalid 
* character is given in an escape sequence
* then result is undefined and will be 
* compiler dependent.
* escape Sequence \c 
* where 'c' may be any invalid character
* that is not mentioned in the escape 
* sequence series.
****************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello, World\y");
    printf("Hello, World\7");
    printf("Hello, World\?");
    
    return EXIT_SUCCESS;
}
