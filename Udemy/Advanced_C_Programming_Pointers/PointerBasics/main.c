#include <stdio.h>

int main (int argc, char *argv[]) {
    int num;
    int *numPtr;
    int num2;

    num = 100;
    numPtr = &num;
    num2 = *numPtr;
    printf("num=%d numptr=%p address of num=%p num2=%d\n", num, numPtr, &num, num2);

    return 0;
}