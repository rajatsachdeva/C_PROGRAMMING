#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

// look at calloc and memory leaks
int main(int argc, char **agrv) {
    char    *s  =   NULL;
    int     i   =   0;
    int     *p  =   NULL;

    // use malloc first to allocate some memory and
    // see what is in it (usually garabge)
    // malloc will return NULL (0) if it fails, so 
    // should always check here
    s = (char *)malloc(6 * sizeof(char));
    if(NULL == s) {
        printf("malloc Failed, Exiting !");
        exit(ENOMEM);
    }

    for (i = 0; i < 6; i++) {
        printf("s[%d] = %d\n", i, s[i]);
    }
    // use free to return the memory 
    // so, that we don't get a memory leak 
    free(s);
    s = NULL;

    printf("\n");

    // now we'll use calloc to do the same - note that the memory is 'zeroed out'
    // NOTE: the syntax of 'calloc' is different for 'malloc' - 
    // the second argument gives the size of the memory unit to allocate
	s = (char*)calloc(6, sizeof(char));
     for (i = 0; i < 6; i++) {
        printf("s[%d] = %d\n", i, s[i]);
    }
    free(s);
    s = NULL;

    printf("\n");

    // 'calloc' allocates 6 integers, 
    // or 24 bytes, since an integer is 4 bytes long (depends upon compiler)
    // same malloc, calloc will also return NULL(0) if it fails, 
    // better to add NULL check
    p = (int *)calloc(6, sizeof(int));
    if (NULL == p) {
        printf("calloc Failed, Exiting !");
        exit(ENOMEM);
    }

    for(i = 0; i < 6; i++) {
        printf("p[%d] = %d\n", i, p[i]);
    }
    free(p);
    p = NULL;

    return 0;
}