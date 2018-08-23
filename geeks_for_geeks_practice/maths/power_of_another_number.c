#include <stdio.h>
#include <math.h>

int main(){
    int tc = 0;
    scanf("%d", &tc);

    while(tc){
        int x = 0;
        int y = 0;

        scanf("%d", &x);
        scanf("%d", &y);

        //check if y is power of x 


        int num = (int)(log(y)/log(x));
        printf("\nx = %d y = %d num = %d\n", x , y, num); 
        if(((int)pow(x, num)) == y){
            printf("1\n");
        } else {
            printf("0\n");
        }
        tc--;
    }
    return 0;
}
