#include<stdio.h> 
struct st 
{ 
	int x, y;
}temp; 

int main() 
{ 
	struct st temp = {10, 20}; 
	
	printf("%d %d", temp.x, temp.y); 
	return 0; 
}
