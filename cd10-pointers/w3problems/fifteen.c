#include <stdio.h>
#include <stdlib.h>
// how a function returns a pointer

// int check(int *a , int *b)
// {
//     if( *a  > *b)
//     {
//         return *a ;
//     }else {
//         return *b;
//     }    
// }

// int main()
// {
//     int a= 20 ;
//     int b = 24 ;
//     int c = check(&a , &b);

//     printf("the number %d is larger" , c);

//     return 0 ;
// }

// ----------------------------------------------------------


int* findLarger(int* , int*);

int main()
{
    int a = 0 ;
    int b = 0 ;
    int *result ;

    a = 4 ;
    b= 5 ;

    result = findLarger(&a , &b);

    printf("%d is the larger number among %d and %d", *result  , a , b );

    return 0 ;
}

int* findLarger(int *a , int *b )
{   
    if( *a > *b)
    {
        return a ;
    }else {
        return b ;
    }

}
