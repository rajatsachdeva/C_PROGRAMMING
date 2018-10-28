#include <stdio.h>

int main() 
{
    int i = 2, j = -2;
	
	if((printf("%d", j)) < (printf("%d", i)))
	   printf("%d", i);
	else
	   printf("%d", j);
    
    return 0;
}
