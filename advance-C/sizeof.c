#include <stdio.h>

#define ARRAY_LEN(a) (sizeof(a)/sizeof(a[0]))


int main()
{
    int a = 1 ;
    int xs[] = { 1 , 2 , 3 , 4 , 5 , 6 ,7 };
    int *xs_ptr = xs ;

    printf("%zu\n" , sizeof(a));
    printf("%zu\n" , sizeof(xs)); 
    // size of pointer in C is 8 bytes
    printf("No of elements in array %zu\n", ARRAY_LEN(xs));
    printf("%zu\n" , sizeof(xs_ptr)); 


    

    
    return 0 ;
}