#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// very simple allocation of memory and changing somehting in the newly allocated memory

int main(int argc, char **argv) {
    char *s = NULL;
    int stringsize = 0;

    stringsize = sizeof("hello");       // first work out how big "hello" is, it is 6
    printf("size of 'hello' is %d\n", stringsize); // note that it is a SIX bytes long (not five) so as to allow for the terminating null character 
    s = (char *)malloc(stringsize); // mow allocate some memory of sufficient size to hold the string "hello"
                                    // note the cast '(char *)'. This is required because malloc always returns a greneric pointer (void *)
    if (NULL == s) {    // malloc will always return 0 or NULL if it failed 
        printf("malloc failed !\n");
        exit(0);
    } 
    
    // now copy the string into the newly allocated memory
    strncpy(s, "hello", stringsize);

    // and change the first character (just to show we can)
    printf("s is %s\n", s);
    s[0] = 'c';
    printf("s is now %s\n", s);
    
    /* free the memory as it's no longer needed */
    free(s);
    s = NULL;

    return 0;
}