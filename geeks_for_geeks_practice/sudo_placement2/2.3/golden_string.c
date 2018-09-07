#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 1000000

int main(){
    int tc = 0;
    scanf("%d", &tc);

    while(tc--){
        char str[SIZE];
        scanf("%s", str);
        int i = 0;
        int vc = 0;
        int cc = 0;
        char c = 0;
        while(str[i] != '\0'){
            c = tolower(str[i]);
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                vc++;
            } else {
                cc++;
            }
            i++;
        }
        if(vc == cc){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
