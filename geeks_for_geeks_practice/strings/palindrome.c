#include <stdio.h>

int main(){

   int tc = 0;
   scanf("%d", &tc);

   while(tc){
       int size = 0;
       scanf("%d", &size);

       char str[size + 1];
       scanf("%s", str);

       int i = 0;
       int j = size - 1;
       int flag = 0;
       for(;i < (size/2); i++, j--){
           if(str[i] != str[j]){
               flag = 1;
               break;
           }
       }

       if(flag == 1)
           printf("No\n");
       else 
           printf("Yes\n");

       tc--;
   }
   return 0;
}
