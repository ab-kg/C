#include <stdio.h>
#include <stdlib.h>

// Dynamic memory behaves like an array, with its data type specified by
//  the type of the pointer.


// we can access dynamic memory by refering to its index number 



// int main()
// {   
//     // int *ptr ; 
//     // ptr[0] = 12 ;
//     // *ptr = 12 ;
//     // // ḍereference the pointer to access the first element 

//     // allocate memory
//     int *ptr ; 
//     ptr = calloc(4 , sizeof(*ptr))   ;
    
//     // write to memory
//     *ptr = 2 ;
//     ptr[1] = 6 ;
//     ptr[2] = 4 ; 


//     // read from the memory 
//     printf("%d\n" , *ptr);
//     printf("%d %d %d " , ptr[0] , ptr[1] , ptr[2]);

//     return 0 ;
// }



// A note on Data types
// Dynamic memory doesnot have its own data type
// data in memory can be interpreted as a type based on data type of pointer 


int main()
{
    
    int *ptr1 = malloc(4);
    char *ptr2 = (char*) ptr1 ;
    ptr1[0] = 1684234849;

    // 0x64636261 hex 

    printf("%d is %c %c %c %c " , *ptr1 , ptr2[0] , ptr2[1] , ptr2[2]  , ptr2[3] );

    return 0 ;
}

  