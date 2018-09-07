#include <stdio.h>
int main()
{
    union test {
        int i;
        int j;
    };
 
    union test var = 10;
    printf("%d, %dn", var.i, var.j);
}
