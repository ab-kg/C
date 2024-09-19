// pointers and multi-dimensional array 

// organisation of multi-dimensional array 
// array , elements are stored in linear way of things 

// pointers with one dimensional is what we are familiar and this seems to be easy. 

// int A[5];
// int *p = A ;

// *(A + i ) is same as A[i]

// ---------------------------------------------------------------------

// working with pointers in multi-demensional array 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int B[2][3];

    for( int i= 0 ; i < 2 ; i++)
    {
        for(int j = 0 ; j  < 3 ; j++)
        {
            B[i][j] = j;
        } ;
    };


    for(int i = 0 ; i < 2 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            printf("%d " , B[i][j]);
        };
        printf("\n");
    };

    // this is how you point to multi-dimensional array 
    int (*p)[3] = B;
    printf("%d\n" , p);
    printf("%d\n" , B);
    printf("%d\n" , B[0]);
    printf("%d\n" , B[0][0]);
    printf("%d\n" , &B[0][0]);
    printf("%d\n" , &B[0]);

    
    // printf("\n");
    // printf("%d\n" , *B);
    // printf("%d\n" , B[0]);
    // printf("%d\n" , &B[0][0]);
    // // printf("%d\n" , *B[0]);
    // // printf("%d\n" , *B[0]);
    // printf("\n");

    // printf("%d\n" , B + 1);
    // printf("%d\n" , &B[1]);

    // printf("\n");
    // printf("%d\n" , *(B+1));
    // printf("%d\n" , B[1]);


    // pinter arithmetic
    // printf("%d" , *(*(B + 1 ) + 2) );

    return 0 ;
}



// B[i][j] = *()