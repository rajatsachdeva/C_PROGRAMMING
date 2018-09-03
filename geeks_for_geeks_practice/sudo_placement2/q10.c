#include<stdio.h>

int x = 2, y = 3;

void fun()
{
	x = x + y;
	y = x - y;
	x = x  - y;
}

int main()
{
	fun();
	fun();
	
	printf("%d %d", x, y);
	
	fun();
	
	return 0;
}
