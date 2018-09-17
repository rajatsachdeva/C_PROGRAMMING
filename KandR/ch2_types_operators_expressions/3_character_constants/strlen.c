#include <stdio.h>

/* strlen: return length of s */
int strlen2(char s[]) {

    int i = 0;

    while(s[i] != '\0') {
        ++i;
    }
    return i;
}

int main() {
    char s[] = "Hello";

    printf("%s, has %d characters\n", s, strlen2(s));
    
    return 0;
}
