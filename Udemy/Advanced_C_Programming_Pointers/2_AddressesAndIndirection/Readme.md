# Addresses and Indirection

`Arrays in C are just sequential data items stored in some location in memory.
Name of the array is the address of the array`

`Unlike many other languages, C doesn't have dedicated string data type, strings are created using character arrays. In C '\0' (null character) is treated as string terminator`

`char str1[] and char *str2 are two very different things. str1 is an array and str1 stores address of start of array and str2 is a pointer variable that will store the address of character (it can be start of a charatacter array)`

`Multiple Indirection, pointers pointing to pointers such that we a pointer variable int *p and int **pi , where pi -> p -> some integer variable, when we use pointer variable to access the value at the address present in the pointer, it's called indirection or dereferencing. Now using the pointer address present in another pointer to access data will be called Multiple Indirection. Used, in list and arrays etc.`

`Command line arguments in C are example for multiple indirection.`

`Generic Pointers: Useful when we want to use same logic for various types of data, like sorting integers, chars , etc. using a single API. Generic pointer is written a pointer to void. When you use the generic pointer then use it alongwith proper type casting to let the compiler know what kind of data is being pointed by this generic pointer.`

`Allocating Memory: we need dynamic memory allocation is powerful feature but dangerous too if we don't use it wisely as if used in wrong way can cause memory corruption/ crashes`


