#include <stdio.h>

void sort_array(int *arr, int size){
    int i = 0;
    int j = 0;
    int temp = 0;

    for (i = 0; i < size; i++){
        for (j = i + 1; j < size; j++) {
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sort_array2(int *arr, int size){
    int i = 0;
    int j = 0;
    int temp = 0;

    for (i = 0; i < size; i++){
        for (j = i + 1; j < size; j++) {
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void print_array(int *arr, int size) {
    int i = 0;
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int check_if_even(int num){
    return (num % 2);
}

int main(){
    int tc = 0;
    scanf("%d", &tc);
    while(tc) {
        int size = 0;
        scanf("%d", &size);
        
        int even[size];
        int odd[size];
        
        int i = 0;
        int ceven = 0;
        int codd = 0;
        int elem = 0;

        for(i = 0; i < size; i++){
            scanf("%d", &elem);
            if(0 == check_if_even(elem)){
                even[ceven] = elem;
                ceven++;
            } else {
                odd[codd] = elem;
                codd++;
            }
        }

        sort_array(even, ceven);
        sort_array2(odd, codd);

        print_array(odd, codd);
        print_array(even, ceven);
        printf("\n");
        tc--;
    }

    return 0;
}
