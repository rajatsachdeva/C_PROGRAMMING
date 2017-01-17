/************************************
*
* To count blanks, tabs and newlines
*
************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c , nb, nt, nl;
    
    nb = 0;             /* number of blanks */
    nt = 0;             /* number of tabs   */
    nl = 0;             /* number of lines  */

    while((c = getchar()) != EOF) {
        if(' ' == c)
            nb++;
        else if ('\t' == c)
            nt++;
        else if('\n' == c)
            nl++;
    }
    
    printf("blanks = %d\n tabs = %d\n lines =%d\n", nb , nt, nl);
    
    return EXIT_SUCCESS;
}
/* Please use CTRL+D in linux to mark EOF
    and CTRL+Z in windows to mark EOF 
*/
