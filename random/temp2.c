#include <stdio.h>

int main() 
{
	int a = 5, b, c = 15, d = 13;
	
	b = (a = c, c += a, d = a + c + d);
	
	printf("%d %d %d %d", a,c,b,d);
	
    return 0;
}
