/*
Sum of fifth powers of the first n natural numbers

You will be given a number N. Your task is to find sum of Fifth powers of the first N natural numbers 15 + 25+ 35 + 45+ …….+ N5 till N-th term.

Input:
The first line of the input contains a single integer T, denoting the number of test cases. 
Then T test case follows, a single line of the input containing a positive integer N.

Output:
For each test-case, print sum of Fifth powers of the first N natural numbers 15 + 25+ 35 + 45+ …….+ N5 till N-th term.

Constraints:
1<=T<=100
1<=N<=1000

Example:

Input:
3
1
2
3

Output:
1
33
276

Explanation:

For testcase 2: The first 2 natural numbers are 1 and 2. So 15+25=1+32=33
*/

#include <stdio.h>
#include <math.h>

int main() {

	int tc = 0;
	scanf("%d", &tc);

	while(tc--) {
		int num = 0;
		long long sum = 0;
		int i = 0;

		scanf("%d", &num);

		for (i = 1; i <= num; i++) {
			sum += (long long) pow(i, 5);
		}
		printf("%lld\n", sum);
	}

	return 0;
}