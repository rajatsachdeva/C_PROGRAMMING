#include <stdio.h>

int main() {

    //int fahr, celsius;
    float fahr , celsius;
    int lower, upper, step;

    lower = 0;   /* lower limit of temperature table */
    upper = 300; /* uppper limit */ 
    step  = 20;  /* step size */

    fahr = lower;

    printf("Fahr\t%s\n", "Celsius");
    while(fahr <= upper) {
        //celsius = ((5 * (fahr - 32)) / 9);  
        celsius = ((5 / 9.0) * (fahr - 32.0));  
        printf("%4.0f\t%7.1f\n", fahr, celsius);
        fahr += step;
    }
    return 0;
}

