/*
 *
 Raghav is given a task to select at most 10 employees for a company project. 
 Each employee is  represented by a single digit I.D. number which is unique 
 for all the selected employees of the project. 
 Raghav has a technical problem in his system which printed I.D. number multiple times. 
 Help him to get rid of the repeated numbers.
 Input:
 First line contain T test cases. 
 Second line contain the Total number (N) of employees where repeated I.Ds. are present. 
 Third line contain the array A[N] of size N containing the I.Ds. of employees.
 
 Output:
 Print the non repeated selected I.D. of employees in a new line in the same sequence they appear in Input.
 
 Constraints:
 1<=T<=100
 0<=N<=1000
 Example:
 
 Input:
 5
 5
 8 8 6 2 1
 6
 7 6 7 4 2 7
 9
 1 9 6 7 4 8 1 4 5
 3
 1 1 1
 5
 0 1 0 1 2
 
 Output:
 8 6 2 1
 7 6 4 2
 1 9 6 7 4 8 5
 1
 0 1 2
 *
 */
#include <stdio.h>

void sort_array(int *arr, int size){
    int i = 0;
    int j = 0;
    int temp = 0;

    for(i = 0; i < size - 1; i++){
        for(j = i + 1; j < size; j++) {
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int check_if_present_in_array(int *arr, int size, int elem) {
    int i = 0;
    for(i = 0; i < size; i++) {
        if(arr[i] == elem){ 
            return 0;
        }
    }
    return -1;
}

int main(){
    int tc = 0;
    scanf("%d", &tc);
    
    while(tc) {
        int size = 0;
        int i = 0;
        
        scanf("%d", &size);
        int arr[size];
        int elem = 0;
        int count = 0;
        
        scanf("%d", &arr[0]);
        count++;
        
        for(i = 1; i < size; i++) {
            scanf("%d", &elem);
            if(-1 == check_if_present_in_array(arr, count, elem)) {
                arr[count] = elem; 
                count++;
            }
        }

        //sort_array(arr, size);

        //int arr2[size];
        //int j = 0;
        //int prev = 0;

        //prev = arr[0];
        //arr2[0] = arr[0];
        //for (i = 1, j = 1; i < size; i++) {
          //  if(prev != arr[i]) {
            //    arr2[j] = arr[i];
              //  prev = arr[i];
               // j++;
           // }
       // }
        
        for(i = 0; i < count; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
        tc--;
    }

    return 0;
}
