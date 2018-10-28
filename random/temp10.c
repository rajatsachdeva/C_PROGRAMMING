#include <stdio.h>
int main()
{
    printf("\nsize = %d\n", sizeof(int));
    if (sizeof(int) > (-10))
        printf("YES");
    else
        printf("NO");
    return 0;
}
