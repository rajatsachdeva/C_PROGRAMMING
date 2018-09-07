#include<stdio.h>
#include<math.h>

int main()
{
	int tc = 0;
	scanf("%d", &tc);
	while(tc--){
	    int n = 0;
	    scanf("%d", &n);
	    int power = 0;
	    long long res = 0;
	    n--; // assuming n >= 1
	    if(n == 0 || n == 1) {
	        printf("1\n");
	    } else {
	        if((n % 2) == 0) {
	            power = n / 2;
	            res = pow(2, power);
	            printf("%ld\n", res);
	        } else {
	            power = (int)ceil(n / 3.0);
	            res = pow(3, power);
	            printf("%ld\n", res);
	        }
	    }
	}
	return 0;
}
