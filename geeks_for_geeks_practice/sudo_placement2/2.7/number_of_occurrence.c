/*
Given a sorted array A of size N and a number X, you need to find the number of occurrences of X in A.

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. Each testcase contains two lines of input:
The first line contains N(size of A) and X(element whose occurrence needs to be counted)
The second line contains the elements of the array separated by spaces.

Output:
For each testcase, print the count of the occurrences of X in the array, if count is zero then print -1.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 300
1 ≤ Ai] ≤ 500

Example:
Input:
2
7 2
1 1 2 2 2 2 3
7 4
1 1 2 2 2 2 3
Output:
4
-1

Explanation:
In first test case, 2 occurs 4 times in 1 1 2 2 2 2 3
In second test case, 4 is not present in 1 1 2 2 2 2 3
*/

#include <stdio.h>

int main() {
	int tc = 0;
	scanf("%d", &tc);

	while(tc--) {
		int arr = 0;
		int elem = 0;
		int size = 0;

		int elem_count = 0;

		scanf("%d %d", &size, &elem);
		while(size--) {
			scanf("%d", &arr);
			if(arr == elem) {
				elem_count++;
			}
		}

		if(elem_count != 0) {
			printf("%d\n", elem_count);
		} else {
			printf("-1\n");
		}
	}
	return 0;
}