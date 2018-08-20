#include <stdio.h>

int main() {
	//code
	int tc = 0;
	int i = 0;
	scanf("%d", &tc);
	printf("\n tc = %d\n", tc);
	for (i = 0; i < tc; i++) {
	    int size = 0;
	    int j = 0;
	    int elem = 0;
	    scanf("%d", &size);
	    printf("\n size = %d\n", size);
	    
	    int arr[size];
	    for (j = 0; j < size; j++) {
	        scanf("%d", &arr[j]);
	       //printf("\n%d", arr[j]);
	    }
	    
	    scanf("%d", &elem);
	    printf("\n elem = %d\n", elem);
	    int k = 0;
	    int flag = 0;
	    for(k = 0; k < size; k++) {
	        if(elem == arr[k]) {
	            flag = 1;
	            break;
	        }
	    }
	    if (flag == 1) {
	        printf("%d", k);
	    } else {
	        printf("-1");
	    }
	}
	
	return 0;
}
