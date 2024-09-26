#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int arr[100] ;
    int n ;
    printf("input the number of elements to be stored in the array: ");
    scanf("%d" , &n);
    printf("Input %d elements in the array \n");

    for(int i = 0 ; i< n;i++)
    {
        printf("Element - %d : " , i+1 );
        scanf("%d" , &arr[i]);
    }

    printf("\n the unique elements found in the array are\n");
    for(int i = 0 ; i < n ;i++)
    {   
        int ctr = 0 ;
        for(int j = 0 ; j< n ; j++)
        {
            if( i != j)
            {
                if( arr[i] == arr[j] )
                {
                    ctr++; 
                }
            }
        }
        if( ctr == 0 )
        {
            printf("%d\n" ,arr[i]);
        }
    }
    printf("\n\n");
    return 0 ;
}