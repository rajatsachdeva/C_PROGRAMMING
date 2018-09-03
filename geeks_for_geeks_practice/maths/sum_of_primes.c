#include <stdio.h>

int is_prime(int);

int main() {
    int tc = 0;
    scanf("%d", &tc)

    while(tc--){
        int sum = 3;
        int n = 0;
        scanf("%d", &n);

        int i = 0;
        for (i = 1; i < n/2; i++){
            if(is_prime(i))
                sum += i;
        }
        printf("%d\n", sum);
    }

    return 0;
}

int is_prime(int n) {
    int i = 0;

    if(n % 2 == 0)
        return 0;

    for ( i = 3; i < n; i++) {
        if(n % i == 0)
            return 0;
    }
    
    return 1;
}
