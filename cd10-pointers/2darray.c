#include <stdio.h>

// row major and column major order

// row 0 , row 1 , row 2 
// col 0 , col 1 , col 2 

// for(int i = 0 ; i < row ; i++)
// {
//     for(int j = 0 ; j < col ; j++)
//     {
//         printf("%d" , a[i][j]);
//     }
// }

// here we can use pointers and we can do the thing by running one loop 
// for(p = &a[0][0]  ; p <= &a[row-1][col-1] ; p++)
// {
//     printf("%d" , *p);
// }

// row major property . 
    
int main()
{       
    int A[5] = { 1 , 2 , 3 , 4 , 5};

    int *p = A;
    printf("%d " , p);
    printf("%d " , p+2);
    printf("%d " , *p);
    printf("%d " , *p);


    // printf("%d " , A);
    // printf("%d " , A+2);
    // printf("%d " , *A);
    // printf("%d " , *(A+ 1));
    return 0 ;
}

