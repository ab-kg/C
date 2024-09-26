#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* arr;
size_t arrSize = 256 ;

// 1> Do you need an array used in many other places 
// 2> Variable size of integers 
// 3> Is that max amount of too big ? 


// If size is not fixed and dont no if it will be that much or can be expanded
// Dynamic Memory can be used 

int main()
{   
    arr = calloc(arrSize , sizeof(int)); 
    if(arr ==  NULL)
    {
        fprintf(stderr , "Array not located");
        return 1 ;
    }
    arr[10] = 17  ;
    printf("%d" , arr[10]);

    arrSize *= 2 ;
    arr = realloc(arr , arrSize*sizeof(int));
    if(arr == NULL)
    {
        fprintf(stderr , "array not located");
        return 1 ;
    }
    // it might be same or might not be the same address as before 
    return 0 ;
}


