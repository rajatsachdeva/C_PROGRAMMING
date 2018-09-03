#include<stdio.h>

int mult(int a, int b)
{
	return (a*b);
}
            
int main()
{
	int x = 5, y = 5;
    
    int z = mult(++x, y++);
    
	printf("%d", z);
	
	return 0;
}
