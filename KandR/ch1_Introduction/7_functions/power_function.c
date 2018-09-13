#include <stdio.h>

/* power function declaration */
int power(int m, int n);

/* main function */
int main() {
    int i;

    for (i = 0; i < 10; ++i) {
        printf("i = %d \tpower(2, i) = %4d \tpower(-3, i) = %6d\n", i, power(2, i), power(-3, i));
    }
    return 0;
}

/* power: raise base to n-th power; n >= 0 */
int power(int base, int n) {
    int i, p;
    
    p = 1;
    for(i = 1; i <=n; ++i) {
        p *= base;
    }
    return p;
}
