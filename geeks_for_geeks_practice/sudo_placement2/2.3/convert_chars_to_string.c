#include <stdio.h>

int main(){
    int tc = 0;
    scanf("%d", &tc);

    while(tc--){
        int len = 0;
        scanf("%d", &len);
        
        char str[len + 1];

        int i = 0;
        char ch = 0;
        for (i = 0; i <= len;){
            scanf("%c", &ch);
            if(ch != ' ') {
                str[i++] = ch;
            }
        }
        str[i] = '\0';

        printf("%s\n", str);
    }/* End of While */
    return 0;
}
