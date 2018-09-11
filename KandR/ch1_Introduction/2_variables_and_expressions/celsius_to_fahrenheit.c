#include <stdio.h>

int main() {

    float fahr , celsius;
    int lower, upper, step;

    lower = 0;   /* lower limit of temperature table */
    upper = 300; /* uppper limit */ 
    step  = 20;  /* step size */

    celsius = lower;
    
    printf("Celsius\t\tFahr\n");

    while(celsius <= upper) {

        fahr = ((9 / 5.0) * celsius ) + 32.0;
        printf("%7.0f\t\t%3.1f\n", celsius, fahr);
        celsius += step;
    }
    return 0;
}

