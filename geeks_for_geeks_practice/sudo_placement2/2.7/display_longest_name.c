/*
Display longest name
Given a list of names, display the longest name.

Input: 
First line of input contains an integer T, the number of test cases. 
For each test case, there will be two lines. 
First line contains integer N i.e. total number of names, and 
second line contains N space seperated names of different length.

Output: 
Longest name in the list of names.

Constraints:
1 <= T <= 10
1 <= N <= 10
1 <= |length of name| <= 1000

Example:
Input:
1
5
Geek
Geeks
Geeksfor
GeeksforGeek
GeeksforGeeks

Output:
GeeksforGeeks
*/

#include <stdio.h>
#include <string.h>

int main() {
	int tc = 0;

	scanf("%d", &tc);

	while(tc--) {
		int num = 0;
		scanf("%d", &num);
		char name[1000];
		char long_name[1000];
		int max_length = 0;

		while(num--) {
			scanf("%s", name);
			if(max_length < strlen(name)) {
				max_length = strlen(name);
				strcpy(long_name, name);
			}
		}
		printf("%s\n", long_name);
	}

	return 0;
}