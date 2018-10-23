/*
Identical Matrices
Write a program to check whether two matrices are identical or not.

Input:
The first line of input contains an integer T denoting the number of test cases. 
Then T test cases follow. Each test contains an integer N denoting the size of the square matrix. T
hen the two square matrix of size N*N is taken as input with space separating integers.

Output:
Print "Yes" (without quotes) if matrices are identical and "No" if not identical.

Constraints:
1<=T<=1000
1<=N<=20
1<=a[i][j]<=1000
1<=b[i][j]<=1000

Example:
Input:
2
4
1 1 1 1 2 2 2 2 3 3 3 3 4 4 4 4
1 1 1 1 2 2 2 2 3 3 3 3 4 4 4 4
2
1 2 3 4
3 4 2 1
 

Output:
Yes
No
*/

#include <stdio.h>

int main() {
	int tc = 0;
	scanf("%d", &tc);

	while(tc--) {
		int size = 0;
		int i = 0, j = 0;

		scanf("%d", &size);
		int arr1[size][size];
		int arr2[size][size];

		for(i = 0; i < size; i++) {
			for(j = 0; j < size; j++) {
				scanf("%d", &arr1[i][j]);
			}
		}

		for(i = 0; i < size; i++) {
			for(j = 0; j < size; j++) {
				scanf("%d", &arr2[i][j]);
			}
		}

		int flag = 0;
		for(i = 0; i < size; i++) {
			for(j = 0; j < size; j++) {

				if(arr1[i][j] != arr2[i][j]) {
					flag = 1;
					break;
				}
			}
			if(flag == 1) {
				break;
			}
		}

		if(flag == 0) {
			printf("Yes\n");
		} else {
			printf("No\n");
		}
	}

	return 0;
}