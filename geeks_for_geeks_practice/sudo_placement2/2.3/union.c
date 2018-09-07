#include<stdio.h>

int main()
{
    union var
    {
        int x, y, res;
    };

    union var z;

    z.x=10;
    z.y=20;
    z.res = z.x*(++z.y);

    printf("%d\n", z.res);

    return 0;
}
