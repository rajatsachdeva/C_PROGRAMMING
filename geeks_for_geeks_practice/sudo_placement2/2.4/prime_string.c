#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    int res = true;
        
    if(num == 2) {
        res = true;
        return res;
    } else if ((num % 2) == 0) {
        res = false;
        return res;
    } else {
        int i = 3;
        for (i = 3; i < num; i++) {
            if((num % i) == 0){
                res = false;
                break;
            }
        }
    }
    return res;
}

int main() {
    int tc = 0;
    scanf("%d", &tc);

    while(tc--) {
       int n = 0;
       int sum = 0;
       scanf("%d", &n);
       
       char str[n+1];
       scanf("%s", str);
       int i = 0;
       for(i = 0; i < n; i++){
           sum += str[i];
       }
       if(true == is_prime(sum)){
           printf("YES\n");
       } else {
           printf("NO\n");
       }
    }
    return 0;
}
