/*
Given a number, reverse it and add it to itself unless it becomes 
a palindrome or number of iterations reach becom more than 5. 
If it becomes a palindrome then print that palindrome number, otherwise print -1.

Input: First line of the input contains an integer T denoting 
		the number of test cases. Each test case has a single line containing a number.

Output: Corresponding to each test case, print the palindrome number or -1 as stated above.

Constraints:
1 <= T <= 200
1 <= N <= 1000

Example:
Input:
2
23
30
Output:
55
33
*/
#include <stdio.h>

/*
 * API to reverse the num
 */
int reverse_num (int num) {
	int temp = num;
	int rev = 0;

	while(temp) {
		rev = (10 * rev) + (temp % 10);
		temp  = temp / 10; 
	}
	return rev;
}

/*
 * API to check if number is palindrome or not
 * return:
 * 0 if not 
 * 1 if yes
 */
int palindrome(int num) {
	int rev = reverse_num(num);

	if(rev == num) {
		return 1;
	} 
	return 0;
}

int main() {
	int tc = 0;
	scanf("%d", &tc);

	while(tc--) {
		int num = 0;

		scanf("%d", &num);
		// iterations
		int count = 6;

		while(count) {

			if(palindrome(num)) {
				printf("%d\n", num);
				break;
			}
			num += reverse_num(num);
			count--;
		}
		if(count < 1) {
			printf("-1\n");
		}
	}
	return 0;
}
