#include<stdio.h>
void main()
{
    enum months {FEB = 2, APRIL, JUNE = 6, AUG, OCT, DEC = 12};
    printf("%d, %d, %d, %d, %d, %dn", FEB++, APRIL, --JUNE, AUG, OCT, DEC);
    
}
