// Difference btn array and pointers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int example(int* l)
{   
    l = l + 1 ;
    return 0 ;
}



int main()
{
    int arr[100] = { 1 , 2 ,3};
    // allocates memory in stack 

    // int* arrp = arr;
    // decay array to pointer ;
    // what are the differences ?
    
    int * arrp = arr;

    // array itself can act as pointer 
    int *p = malloc(3*sizeof(int));
    // allocates memory due to malloc and p points to memory space 
    
    p[0] = 1;
    p[1] = 2;
    p[3] = 3;

    example(p);
    example(arr);

    arrp = arrp + 1 ;
    // printf("%d %d %p\n" , arr , arrp , p );

    printf("%llu %llu \n" , sizeof(arr) , sizeof(p));
    // p = p + 1 ;
    // arr = arr + 1 ; ------------------ cannot can be done with arr 
    // printf("%p %p\n" , arr , p);
    free(p);
    return 0 ;
}

