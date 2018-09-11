#include <stdio.h>
#include <math.h>

int main(){
    int tc = 0;
    scanf("%d", &tc);

    while(tc--) {
        int num = 0;
        scanf("%d", &num);
        int sum = 0;

        int i = 1;
        for(i = 1; num != 0 ; i += 2){
            if((i % 2) != 0 ) {
                printf("sum = %d i = %d\n", sum, i); 
                sum = sum + (i * i);
                num--;
            }
        }

        printf("%d\n", sum);
    }
    return 0;
}
