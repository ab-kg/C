#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   
    int n ;
    printf("input the number of elements stored in array");
    scanf("%d" , &n);

    int arr[n];
    for(int i = 0 ; i< n ; i++)
    {   
        printf("input element no: %d" , i+1);
        scanf("%d" , &arr[i]);
    }

    int brr[n];
    for(int i = 0 ; i < n ; i++)
    {
        brr[i] = arr[i];
    }

    printf("elements stored in first array\n");
    for(int i = 0 ; i< n ; i++)
    {
        printf("%d " , arr[i]);
    }

    printf("\nelements stored in second array\n");
    for(int i = 0 ; i< n ; i++)
    {
        printf("%d " , brr[i]);
    }

    return 0 ;
}