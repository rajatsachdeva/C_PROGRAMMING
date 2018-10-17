/*
Perfect Square String

You are given a string S. Your task is to determine if sum of ASCII values of all character results in a perfect square or not.

Input:
The first line of the input contains a single integer T, denoting the number of test cases. Then T test cases follow. Each testcase has a string S

Output:
Print 1 if the resulting sum is a perfect square, else print 0.

Constraints:
1<=T<=100
1<=|S|<=1000

Example:

Input:
4
1Qy
abcd
efgh
d

Output:
0
0
0
1
*/

#include <stdio.h>
#include <math.h>

void is_perfect_square(int num) {

	int num_sqrt = (int) sqrt(num);
	int square = (int) pow(num_sqrt, 2);

	if(square == num) {
		printf("1\n");
	} else {
		printf("0\n");
	}
}

int main() {
	int tc = 0;

	scanf("%d", &tc);

	while(tc--) {

		char in[1001];
		int sum = 0;
		int i = 0;

		scanf("%s", in);

		while(in[i] != '\0') {
			sum += in[i];
			i++;
		}

		is_perfect_square(sum);
	}
	return 0;
}