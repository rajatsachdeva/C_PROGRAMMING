/***************************************************
*
* To Print a Temperature Table 
* Fahrenheit - Celsius table
*
*             5     
*  celsius =  - * (fahr -32)
*             9  
*
****************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;              /* lower limit of temperature table */
    upper = 300;            /* upper limit                      */
    step  = 20;             /* step size                        */
    
    printf("\nFahr Celsius\n");
    fahr = lower;
    while(fahr < upper){
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f   %6.1f\n", fahr, celsius);
        fahr += step;
    }
    
    return EXIT_SUCCESS;
}
