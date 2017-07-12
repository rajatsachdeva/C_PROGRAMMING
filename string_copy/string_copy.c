/* 
 This file depcits the use of 
 strcpy, strcpy_s, strncpy, strncpy_s
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HELLO "Hello"
#define WORLD "World!"

/* way not to use string copy functions */

int main()
{
	char hello[200] = HELLO;
	char world[] = WORLD;
	char temp1[20];
	char temp2[30];

	int i = 0;
		
	printf("\nlength of %s is %d\n", hello, strlen(hello));
	
	strncpy_s(temp1, 64, hello, 64);
	printf("\ntemp1 = %s\n", temp1);  
	
	while(i <=strlen(hello)){
		if(hello[i] == '\0')
			printf("\'\\0\'");
		else
			printf("\'%c\' ", hello[i]);	
		
		i++;	
	}	
	printf("\n");
	return EXIT_SUCCESS;
}	
