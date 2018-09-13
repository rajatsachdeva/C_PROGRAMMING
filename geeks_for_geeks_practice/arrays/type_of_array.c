#include <stdio.h>

void find_type_and_max(int *a, int n){
    int i = 0;
    int type = 0;
    int max = 0;

    while((i < (n - 1)) && (arr[i] <= arr[i+1])){
        i++;
    }

    if(i == (n - 1)) {
        type = 1;
        max = a[n-1];
        printf("%d %d\n", max , type);
        return;
    }

    // if first element is greater than second element
    if (i == 0){
        while(i < n -1 && arr[i] >= arr[i+1]) {
            i++;
        }
        if(i == n-1) {
            type = 2;
            max = a[0];
            printf("%d %d\n", max , type);
            return;
        }


    }

}

int main() {
    int tc = 0;
    scanf("%d", &tc);

    while(tc--){
        int n = 0;
        scanf("%d", &n);

        int a[n];
        int i = 0;
        for(i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }

        find_type_and_max(a, n);
    }

    return 0;

}
