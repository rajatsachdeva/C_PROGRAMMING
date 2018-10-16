#include <stdio.h>

int main() {
    long long var1 = 5;

    printf("size of long = %ld, size of int = %ld\n", sizeof(*(&var1)), sizeof(5));
    return 0;
    
}
