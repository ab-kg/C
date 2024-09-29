// Memory Distribution

// Heap             => Dynamic memory 
// Stack            => Function Calls / Local Variable
// Static / Global  => global variables
// Code /Text       => instructions 

// Dynamic memory can grow as much as there is available memory space int the computer 


#include <stdio.h>
#include <stdlib.h>


// int total ;

// int Square(int x)
// {
//     return x*x;
// }

// int SquareOfSum(int x , int y )
// {
//     int z = Square(x + y);
//     return z ;
// }

// int main()
// {
//     int a = 4 , b  = 4;
//     total = SquareOfSum( a , b);
//     printf("Output = %d " , total);

//     return 0 ;
// }



// Dynamic Memory 
// Heap is not fixed size 
// Heap can grow as much as the system has the space in it 
// Free pool of memory 

// malloc 
// calloc
// realloc
// free

// new 
// delete 


// Stack memory is an implementation of stack data structure 
// Stack is also a data structure   

// Heap is also a data structure 
// Heap memory is totally different from Heap data structure 


// Computer Architecture is where we learn how compiler allocates memory to programs or anything like that 


// ----------------------------------------------------------------------------------------------------

// int main()
// {
//     int a ;
//     int *p ;

//     // type casting here 
//     // malloc returns void pointer , so we converted the void pointer into integer pointer  
//     p = (int*)malloc(sizeof(int));
//     *p = 10 ;
//     printf("%d\n" , p);
//     printf("%d\n" , *p);
//     // we can free the first memory block 
//     free(p);

//     // only way to access this memory block is by pointing towards the point  
//     // p = (int*)malloc(20*sizeof(int));
//     // *p = p[0]
//     // *(p + 1) = p[1]

//     // now the pointer points towards another heap memory of int size 
//     return 0 ;
// }


// C++ way of doing shit 

// int main()
// {
//     int a ;
//     int *p ;

//     p = new int ;
//     *p = 10 ;
//     delete p 
//     p = new int[20];
//     delete[] p ;
// }

// -----------------------------------------------------------------------

// int main()
// {
//     int n ;
//     printf("enter size of array");
//     scanf("%d" , &n);

//     int *A = (int*)malloc(n*sizeof(int));

//     for(int i = 0 ; i < n ; i++)
//     {
//         A[i] = i+1 ;
//     }

//     for(int i = 0 ; i < n ; i++)
//     {
//         printf("%d " , A[i]);
//     }

//     return 0 ;
// }


// ------------------------------------

int main()
{
    int n ;
    printf("Enteer the size of the arraay\n");
    scanf("%d" , &n);

    int *A = (int *)malloc(n*sizeof(int));

    for(int i= 0 ; i< n ; i++)
    {
        A[i] = i + 1 ;
    }
    // free(A);
    int *B ;
    B = (int *)realloc(A , 2*n*sizeof(int));
    printf("prev bloc address= %d , new address = %d\n", A , B);

    for(int i  = 0 ; i< 2*n ; i++)
    {
        B[i] = i + 1 ;
    }

    for(int i = 0 ; i < 2*n ; i++)
    {
        printf("%d " , B[i]);
    }
    return 0 ;
}


// Do hard things in life is the philosophy 
// wake up 
// list down all the hard things you can go through
// go through them 
// Life will be so good 
