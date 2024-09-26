#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n  ;
    printf("input the number of elements to be stored in the array: "  );
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i< n ;i++)
    {   
        printf("\nelement no %d " , i+1 );
        scanf("%d" , &arr[i]);
    }

    int temp ;
    // Bubble sort 
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n - i - 1; j++)
        {
            if(arr[j] < arr[j+ 1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp ;
            }
        }
    }

    for(int i = 0 ; i< n ;i++)
    {   
        printf("\nelement no %d " , arr[i] );
    }


    return 0 ;  
}