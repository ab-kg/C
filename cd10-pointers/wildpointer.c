#include <stdio.h>


// Wild Pointers
// uninitialized pointers
// these pointers are usually pointed towards some arbitary memory location 

// may cause a program to crash or misbehave



// what is the problem  ?

// here below is pointer which is pointing to some random memory location
// and in that memory location we are trying to dereference and stroe the value of 10 in it 
// if that random memory is not free it can cause errors

int main()
{
    int *p ;
    *p = 10 ;
    return 0 ;
};

// How to avoid wild pointers

// 1. initialize with the known address or explicitly create a new space using malloc

int main()
{
    int *p = (int *)malloc(sizeof(int));
    *p = 10 ;
    free(p);
    return 0 ;
}


