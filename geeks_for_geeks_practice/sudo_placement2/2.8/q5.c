#include<stdio.h>
#include<stdlib.h>
char *getString() // line1
{ 
char *str = "Nice test for strings"; // line 2
return str; 
} 

int main() 
{ 
printf("%s", getString()); 
getchar(); 
return 0; 
}
