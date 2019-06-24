#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(int argc, char **agrv) {
    char *s =  NULL;
    int   i = 0;

    i = sizeof("hello");    // as before workout how much memory we need to save "hello"
    s = (char *)malloc(i);  // malloc will return NULL(0) if it fails
    if(NULL == s) {
        printf("malloc failed ! Exiting");
        exit(ENOMEM);
    }
    strncpy(s, "hello", i); // now copy the string into the newly allocated memory

    printf("s is %s, i is %d\n", s, i);

    // now suppose we want to add 'world' to 'hello' - we can't just do this ...
    // strcat(s, " world");					- disaster!!! 
    i = sizeof("hello, world"); // re-calculate the size 
    s = (char *)realloc(s, i); // re-size the array
    if(NULL == s) {
        printf("realloc failed ! Exiting");
        exit(ENOMEM);
    }

    strncpy(s, "hello", 6);
    strcat(s, " world");
    printf("s is now %s\n", s);

    free(s);
    return 0;
}