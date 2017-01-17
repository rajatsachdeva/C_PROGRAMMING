/************************************
*
*   Celsius to Fahrenheit table
*
*   fahr = (9 * celsius)
*           ----------- + 32
*                5
*************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;              /* lower limit of Temperature table */
    upper = 300;            /* upper limit                      */
    step  = 20;             /* step size                        */

    printf("\ncelsius fahr\n");
    celsius = lower;
    while(celsius < upper) {
        fahr = ((9.0 * celsius)/5.0) + 32.0;
        printf("%3.0f  %6.1f\n", celsius, fahr);
        celsius += step;
    }

    return EXIT_SUCCESS;
}
