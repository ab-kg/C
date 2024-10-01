#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("what you want to do here ?");
    printf("1 for addition , 2 for subtration , 3 for multiplication , 4 for divison ,5 for logarithmic values , 6 for square roots");
    int n ;
    scanf("%d" , &n);
    int n1 , n2;
    int result ;
    if( n == 1)
    {
        printf("enter two digits to be added");
        scanf("%d %d" , &n1 , &n2);
        int result = n1 + n2 ;
    }else if(n == 2)
    {
        printf("enter two digits to be subbed" );
        scanf("%d %d" , &n1 , &n2);
        result = (n1 > n2) ? n1 - n2 : n2 -n1 ;
        printf("%d" , result );
    }else if(n == 3)
    {
        printf("enter two digits to be multiplied");
        scanf("%d %d", &n1 , &n2);
        result = n1*n2;
        printf("%d" , result );
    }else if(n == 4)
    {
        printf("enter two digits to be divided ; first number will be numerator and second will be denominator ");
        scanf("%d %d", &n1 , &n2);
        result = n1/n2;
        printf("%d" , result );
    }else if(n == 5)
    {
        printf("enter the integer if you wnat to find the log value of it ");
        scanf("%d", &n1);
        result = log10(n1);
        printf("%d" , result );
    }else {
        printf("enter the integer if you want tofind square of it  ");
        scanf("%d" , &n2);
        result = sqrt(n2);
        printf("%d" , result );
    }


    return 0 ;
}

