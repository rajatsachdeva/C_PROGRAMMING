#include <stdio.h>

int main(int argc, char **argv) {
    char str[] = "Hello, World!";
    printf("%s %c %p %p\n", str, str[0], &str, str);
    return 0;
}