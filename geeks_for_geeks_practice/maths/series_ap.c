#include <stdio.h>

int main(){
    int tc = 0;
    scanf("%d", &tc);

    while(tc--){
        int a = 0;
        int b = 0;
        int d = 0;
        int n = 0;

        scanf("%d", &a);
        scanf("%d", &b);

        d = b - a;
        scanf("%d", &n);

        printf("%d\n", (a + (n -1)*d));
    }
    
    return 0;

}
