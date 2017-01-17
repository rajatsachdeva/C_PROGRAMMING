/*****************************************
*
* To Print the Temperature Table in
* Reverse Order.*
*
*****************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahr,celsius;

    int upper  = 300;
    int lower  = 0;
    int step   = 20;

    printf("\nfahr celsius\n");
    
    /* Using For loop */
    for(fahr = upper; fahr > lower; fahr -= 20){
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f  %6.1f\n", fahr, celsius);
    }

    return EXIT_SUCCESS;
}
