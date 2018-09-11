#include <stdio.h>
#include <stdbool.h>

bool if_digit_present_in_num(int num, int d) {
    bool res = false;
    int temp = num;
    int rem = 0;
    if(num == d) {
        res = true;
        return res;
    }

    while(temp) {

        if(d == (temp % 10)) {
            res = true;
            break;
        }
        temp = temp / 10;
    }
    return res;
}

int main() {
    int tc = 0;
    scanf("%d", &tc);

    while(tc--) {
        int n = 0, d = 0;
        scanf("%d", &n);
        scanf("%d", &d);

        int i = 0;
        int flag = 0;
        for (i = 0; i <= n; i++){

            if(true == if_digit_present_in_num(i, d)) {
                flag = 1;
                printf("%d ", i);
            }
        }
        if(flag == 0) {
            printf("-1");
        }
        printf("\n");
    }
    return 0;
}
