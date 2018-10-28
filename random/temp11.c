#include <stdio.h>

int main(){ 

    int x = 2;
    switch(x % 2) {
        case 0:
            printf("\nODD\n");
            break;
        case 1:
            printf("\nEVEN\n");
            break;
    }
    return 0;
}
