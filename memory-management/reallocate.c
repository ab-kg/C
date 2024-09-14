#include <stdio.h>
#include <stdlib.h>
// if the amount of memory you allocated is not enough
// you can reallocate it to make it larger


// realloc() function 
// int *ptr2 = realloc(ptr1 , size);

// ptr1 = pointer to the memory that is being resized
// size => new size of the allocated memory 


// increase the size of the allocated memory 

// int main()
// {   
//     int *ptr1 , *ptr2 , size ; 

//     // allocate memory for four integers
//     size = 4 * sizeof(*ptr1);
//     // malloc allocates size bytes of memory dynamically frm the heap
//     ptr1 = malloc(size);

//     printf("%d bytes allocated at address %p \n" , size , ptr1);


//     // resize the memory to hold six integers
//     size = 6*sizeof(*ptr1);
//     ptr2 = realloc(ptr1 , size);

//     printf("%d bytes reallocated at address %p \n" , size , ptr2);
//     return 0 ;
// }




// ----------------------
// Null pointer and Error Checking

// realloc fn returns null pointer if it is not able to allocate more memory


// checks whether realloc() is able to resize the memory or not

int main()
{
    int *ptr1 , *ptr2 ;

    // allocate memory
    ptr1 = malloc(4);

    // attempt to resize the memory 
    ptr2 = realloc(ptr1 , 8);

    if(ptr2 == NULL)
    {
        // if reallocation fails 
        printf("Failed , unable to resize memory");
    }else 
    {
        printf("Success. 8 bytes reallocated at aaddress %p \n" , ptr2);
        ptr1 = ptr2 ; 
    }

    free(ptr1);
}


// always include error checking when allocating memory 
