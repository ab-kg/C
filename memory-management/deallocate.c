#include <stdio.h>
#include <stdlib.h>
// int main()
// {
//     int *ptr;
//     ptr = malloc(sizeof(*ptr));

//     free(ptr);
//     ptr = NULL;

    
//     return 0 ;
// }


// int main()
// {

//     int *ptr ;
//     ptr = malloc(sizeof(*ptr));

//     if(ptr == NULL)
//     {
//         printf("Unable to allocate memory");
//         return 1 ;
//     }

//     // sset the value of integer 
//     *ptr = 20 ;

//     printf("%d \n" , *ptr);
//     printf("%d \n" , ptr);

//     free(ptr);
//     ptr = NULL ;
//     // printf("%d \n" , ptr );
//     printf("%d \n" , ptr );
//     return 0 ;
// }

// ----------------------------
// Memory Leaks

// happens when dynamic memory is never freed
// if memory leak is carried out in a loop or function which is called several times
// it may slow down the computer as there is access memory being used with out freeing it 

// can also happen if pointer to dynamic memory is lost before memory is freed 
// keep track of pointers to dynamic memory



// in this program pointer is first pointing towards dynmaic memory 
// then suddenly pionter is pointing towards x 
// now calloc() allocated memory cannot be accessed 

// int main()
// {   
//     int x = 5 ;
//     int *ptr ; 
//     ptr = calloc( 2 , sizeof(*ptr));
//     ptr = &x ;

//     return 0 ;
// }

// eg:2

// void myFunction() {
//   int *ptr;
//   ptr = malloc(sizeof(*ptr));
// }

// int main() {
//   myFunction();
//   printf("The function has ended");
//   return 0;
// }

// eg: 3 

// int* ptr;
// ptr = malloc(sizeof(*ptr));
// ptr = realloc(ptr, 2*sizeof(*ptr));

// if realloc fails ,ptr now points to NULL as realloc returns NULL in case if it fails 
// hence the first allocated dynamic memory through malloc stays .