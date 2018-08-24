#include <stdio.h>

int main(){
    int tc = 0;
    scanf("%d", &tc);

    while(tc--){
        int n = 0;
        int sum_in = 0;
        int sum_expected = 0;

        scanf("%d", &n);
        int arr[n-1];
        sum_expected = (n *(n + 1))/2;

        int i = 0;
        for(i = 0; i < n -1; i++){
            scanf("%d", &arr[i]);
            sum_in += arr[i];
        }

        printf("%d\n", sum_expected - sum_in);
    }
    
    return 0;
}
