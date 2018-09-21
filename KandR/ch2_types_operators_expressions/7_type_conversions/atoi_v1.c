#include <stdio.h>

int atoi2(char s[]) {
    int i, n; 
    n = 0;

    for(i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
        n = n * 10 + (s[i] - '0');
    }
    return n;
}

int main() {
    char s[] = "1234567890";
    printf("%d\n", atoi2(s)); 
    return 0;
}
