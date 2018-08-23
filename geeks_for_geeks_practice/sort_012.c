#include <stdio.h>

void print_array(int *arr, int size) {
    int i = 0;
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sort_array(int *arr, int size) {
    int i = 0;
    int j = 0;
    int temp = 0;
    for (i = 0; i < size - 1; i++) {
        for (j = i+1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
	//code
	int tc = 0;
    int i = 0;
    
    for (i = 0; i < tc; i++) {
        int size = 0;
        scanf("%d", &size);
        
        int j = 0;
        int arr[size];
        for(j = 0; j < size; j++) {
            scanf("%d", &arr[j]);
        }
        
        sort_array(arr, size);
        print_array(arr, size);
    }
	return 0;
}
