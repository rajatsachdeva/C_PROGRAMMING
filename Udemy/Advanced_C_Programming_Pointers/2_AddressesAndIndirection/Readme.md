# Addresses and Indirection

`Arrays in C are just sequential data items stored in some location in memory.
Name of the array is the address of the array`

`Unlike many other languages, C doesn't have dedicated string data type, strings are created using character arrays. In C '\0' (null character) is treated as string terminator`

`char str1[] and char *str2 are two very different things. str1 is an array and str1 stores address of start of array and str2 is a pointer variable that will store the address of character (it can be start of a charatacter array)`

`Multiple Indirection, pointers pointing to pointers such that we a pointer variable int *p and int **pi , where pi -> p -> some integer variable, when we use pointer variable to access the value at the address present in the pointer, it's called indirection or dereferencing. Now using the pointer address present in another pointer to access data will be called Multiple Indirection. Used, in list and arrays etc.`

`Command line arguments in C are example for multiple indirection.`

`Generic Pointers: Useful when we want to use same logic for various types of data, like sorting integers, chars , etc. using a single API. Generic pointer is written a pointer to void. When you use the generic pointer then use it alongwith proper type casting to let the compiler know what kind of data is being pointed by this generic pointer.`

`Allocating Memory: dynamic memory allocation is powerful feature but dangerous too if we don't use it wisely as if used in wrong way can cause memory corruption/ crashes. malloc allocates memory in the heap, local variables are saved in stack and have function scope only. Data present in heap will be stored globally and can be accessed from the program across , so that have program scope.`

`Safe string functions: Some C compilers complain about using traditional string functions like strncpy as it is not safe, and instead asks the user to use the safer version of the function which is strncpy_s, we could avoid it by supressing the compilers errors, but it's recommended we use safe library where ever it is possible. In some instances we might have to stick to traditional APIs only as compiler doesn't yet support the safe string functions.`

`malloc/ calloc/ realloc retrun generic pointer void * if succeeded otherwise NULL pointer in case of failure. NULL pointer is basically the address to which nothing points i.e. 0 , anything above 0 is a valid address.`

`free: if we were to allocate the memory chunks, eventually we will run out of memory and crash. We need to give back the memory that is no more required. Memory not being freed will lead to memory leaks. It's good practice to deallocate the memory that is no longer required.`
