#include <stdlib.h>
#include <stdio.h>
int main()
{
 int *p, *q;
 q = p;
 p = (int*) malloc(sizeof(int)); //Assume that malloc is successful
 *p = 12;
 printf("%d", *q);
 return 0;
}
