#include <stdio.h>


// A null pointer is a pointer that does not point to any memory location
// It represents invalid memory location


int main()
{
    int *ptr = NULL ;

    printf("%d" , ptr);
    return 0 ;
}

// Uses of NULL pointer 

// 1. Useful for handling errors when using malloc function


// BEst Practice 

// 1. If we are not using the pointer we should point it towards NULL 
// 2. After allocating some memory using calloc , we need to check if the malloc is returning void pointer or NULL
// 3. If it is NULL then we need to know that memory wasnt allocated as we intended 




