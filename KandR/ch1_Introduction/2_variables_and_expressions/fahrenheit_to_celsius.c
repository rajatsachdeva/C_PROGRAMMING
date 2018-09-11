#include <stdio.h>

int main() {

    int fahr, celsius;
    int lower, upper, step;

    lower = 0;   /* lower limit of temperature table */
    upper = 300; /* uppper limit */ 
    step  = 20;  /* step size */

    fahr = lower;

    printf("Fahr\t%s\n", "Celsius");
    while(fahr <= upper) {
        celsius = ((5 * (fahr - 32)) / 9);  
        printf("%4d\t%7d\n", fahr, celsius);
        fahr += step;
    }

    return 0;
}

