/* 
 * towers of hanoi
 */
#include <stdio.h>

void TowersOfHanoi(int n, char from, char to, char aux) {
    /* Base Case 
     * If there is only one disks then just move the disk
     */
     if(n == 1) {
         printf("Moving one disk from %c to %c\n", from, to);
        return;
     }  

     /* Move n-1 disks from Source to Aux using Destination as Aux */
     TowersOfHanoi(n-1, from, aux, to);

     /* Move nth disk from Source to Destination */
     printf("Moving %d disk from %c to %c\n", n, from, to);

    /* Move n-1 disks from tower 'aux' to 'to' */
     TowersOfHanoi(n-1, aux, to, from);
}

int main() {
    printf("\n Towers of Hanoi \n");
    TowersOfHanoi(3, 'S', 'D', 'A');
    return 0;
}