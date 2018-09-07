#include<stdio.h>

int main()
{
    struct xyz
    {
        float group:10;
        char plan:5;
    };

    printf("size=%d", sizeof(struct xyz));

    return 0;
}
