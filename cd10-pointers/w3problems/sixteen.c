#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    printf("input the no of elements to store in the array");
    scanf("%d" , &n );

    int arr[50];

    int *p ;
    for( p  = arr  ; p < arr + n  ; p++)
    {
        scanf("%d" , p);
    }

    for(p = arr ; p < arr + n  ; p++)
    {
        printf("%d " , *p );
    }
    printf("\n");

    int *pt ;
    int sum = 0 ;
    for(pt = arr ; pt < arr + n ; pt++)
    {   
        sum = sum + *pt;
    }

    printf("%d" , sum);
    return 0 ;
}

