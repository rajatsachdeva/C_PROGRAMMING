#include <stdio.h>
#include <string.h>

#define IF_VOWEL(c) (c == 'a' || c == 'e' || c  == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'I' || c == 'E' || c == 'O' || c == 'U')

int main(){
    int tc = 0;
    scanf("%d", &tc);

    while(tc){
        char str[100];
        scanf("%s", str);

        int i = 0;
        int j = strlen(str) - 1;

        char c;
        while(i != j){
            if(IF_VOWEL(str[i])){
               
               IF_VOWEL(str[j]) 
                c = str[i];
                str[i] = str[j];
                str[j] = c;
            }
        }
        printf("%s\n", str);
        tc--;
    }

    return 0;
}
