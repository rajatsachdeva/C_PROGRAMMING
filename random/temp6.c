#include <stdio.h>

int main()
{
    int x = 2;

    do{
        ++x;
        
        printf("%d", x);
    } while(--x <= 2);
    
    return 0;
}
