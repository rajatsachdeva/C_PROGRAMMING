/* check if array is sorted */
#include <stdio.h>

int isArraySorted (int a[], int n) {
    if (n == 1) {
        return 1;
    }
    return (a[n-1] < a[n-2]) ? 0 : isArraySorted(a, n-1);
}

int main(void) {
    int a[] = {1,2,3,4,5};
    int b[] = {1,4,2,3,5};

    if (1 == isArraySorted(a, 5)) {
        printf("Array a is Sorted\n");
    } else {
        printf("Array a is not sorted\n");
    }
    if (1 == isArraySorted(b, 5)) {
        printf("Array b is Sorted\n");
    } else {
        printf("Array b is not sorted\n");
    }
    return 0;
}