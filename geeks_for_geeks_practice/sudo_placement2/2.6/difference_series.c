/*
Difference Series
Given a series of numbers  3,10,21,36 …., and series starting from n=1 , find the pattern and output the nth value of above series.

Input:
The first line of the input contains a single integer T denoting the number of test cases.
The first line of each test case contains n.

Output:
For each test case, output the nth value of above series.

Constraints:
1 ≤ T ≤ 100
1 ≤ n≤ 100

Example:
Input:

4
1
2
3
4

Output:
3
10
21
36
*/

#include <stdio.h>

int main() {
	int tc = 0;
	scanf("%d", &tc);

	while(tc--) {
		int n = 0;

		scanf("%d", &n);

		printf("%d\n", (n * ((2 * n) + 1)));
	}

	return 0;
}