#include <stdio.h>


int main()
{   int n ;
    // int arr[25];
    printf("input the number of elements ");
    scanf("%d" ,&n );

    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        printf("input the number %d " , i+1);
        scanf("%d" , &arr[i]);
    }

    for(int i = 0 ; i< n ; i++)
    {
        printf("elements you entered are %d \n" , arr[i]);
        // printf("%d" , arr[i]);
    }

    return 0 ;
}

