#include <stdio.h>


int main()
{
    int a , b ;

    printf("input first number \n");
    scanf("%d" , &a);

    printf("input second number \n");
    scanf("%d" , &b);

    int *ptr1 = &a ;
    int *ptr2 = &b ;
    int max ;

    if( *ptr1 > *ptr2 )
    {
        max = *ptr1 ;
    }else {
        max = *ptr2 ;
    }

    printf("%d this is the maximum number ." , max);

    return 0 ;
}