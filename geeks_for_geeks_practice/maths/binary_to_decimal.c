#include <stdio.h>
#include <math.h>

int main(){
    int tc = 0;
    scanf("%d", &tc);

    while(tc--){
        long long num = 0;
        scanf("%ld", &num);

        int rem = 0;
        int decimal = 0;
        int i = 0;
        
        while(num > 0){
            rem = num % 10;
            decimal += (rem * pow(2, i));
            num  = num / 10;
            i++;
        }
        printf("%d\n", decimal);
    }

    return 0;
}
