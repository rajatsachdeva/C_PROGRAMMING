/*
Given an array of N distinct elements, the task is to find 
all elements in array except two greatest elements.

Input:
The first line of input contains an integer T denoting the number of test cases. 
Each test case contains two lines. The first line of input contains an integer N 
denoting the size of the array. Then in the next line are N space separated array elements.

Output:
For each test case in a new line print the space separated sorted values denoting 
the elements in array which have at-least two greater elements than themselves.

Constraints:
1<=T<=100
3<=N<=100
1<=A[]<=100

Example:
Input:
2
5
2 8 7 1 5
6
7 -2 3 4 9 -1

Output:
1 2 5
-2 -1 3 4
*/

#include <stdio.h>
#include <stdlib.h>

/* 
 * API to sort an array in ascending order
 */
void sort(int* arr, int size) {
	int i = 0, j = 0;
	int temp = 0;

	for(i = 0; i < size - 1; i++) {
		for(j = i + 1; j < size; j++) {
			if(arr[i] > arr[j]) {
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}

int main() {
	int tc = 0;
	scanf("%d", &tc); 

	while(tc--) {
		int size = 0;
		scanf("%d", &size);

		int arr[size];
		int i = 0;
		for (i = 0; i < size; i++) {
			scanf("%d", &arr[i]);
		}

		sort(arr, size);
		for(i = 0; i < size - 2; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
	return 0;
}