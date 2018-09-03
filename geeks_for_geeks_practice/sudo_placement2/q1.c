#include <stdio.h>

int xyz(int b)
{
	return (b--);
}
           
int main()
{
	int a = xyz(12);
	
	printf("%d", ++a);
	
	return 0;
}
