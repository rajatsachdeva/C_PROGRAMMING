/*
Given a string s, remove all consonants and prints the string s that contains vowels only.
Input: The first line of input contains integer T denoting the number of test cases. For each test case, we input a string.
Output: For each test case, we get a string containing only vowels. If the string doesn't contain any vowels, then print "No Vowel"

Constraints:

1<=T<=100

The string should consist of only alphabets.

Examples:

Input: geEks
Output: eE
Input: what are you doing
Output: a ae ou oi
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	int tc = 0;
	scanf("%d\n", &tc);

	while(tc--) {
		int i = 0;
		int flag = 0;
		char c = 0;

		char str[1000];
		fgets (str, 1000, stdin);

		for(i = 0; i < strlen(str); i++) {
			c = tolower(str[i]);

			if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == ' ') {
				printf("%c", str[i]);
				flag = 1;
			}
		}


		if(flag == 0) {
			printf("No Vowel\n");
		} else {
			printf("\n");
		}
	}

	return 0;
}