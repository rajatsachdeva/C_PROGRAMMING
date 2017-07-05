/* 
 *
 *	Hash Function for strings 
 *
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
	Hash map function 
	IN
		input string
		size of the table
	
	OUT/Return 
		hash value corresponding to input string key			
*/
 
int hash_map_simple(char *str, int size)
{
	int sum = 0;
	int i 	= 0;
	int c 	= 0;

	c = *str;	
	while(c)
	{
		sum += c;
		str++;
		c = *str;
	}
	/* Return hash value in range 0 to size - 1*/
	return sum % size;
}

/* 	
	Sample
	Test cases	
*/
char *test_cases[] = {
	"Sample Test case 1",
	"Sample Test case 2",
	"Sample Test case 3",
	"Sample Test case 4",
	"Sample Test case 5",
	"Sample Test case 6",
	"Sample Test case 7",
	"Sample Test case 8"
};

int main()
{
	int i = 0;
	int size = 0;
	
	/* get the size of the table */
	size = sizeof(test_cases) / sizeof(test_cases[0]);

	/* run the test cases */
	for(i = 0; i < size; i++)
		printf("\n%s ------> %d", test_cases[i], hash_map_simple(test_cases[i], size));
	printf("\n");

	return EXIT_SUCCESS;
} 		
