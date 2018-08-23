#include<stdio.h>

void print_sum_of_digits(int num) {
    int sum = 0;
    
    while(num > 0){
        sum += (num % 10);
        num = num / 10;
    }
    printf("%d\n", sum);
}
int main()
{
    int tc = 0;
    scanf("%d", &tc);
    
    while(tc) {
        int num = 0;
        scanf ("%d", &num);
        print_sum_of_digits(num);
        tc--;
    }
	return 0;
}
