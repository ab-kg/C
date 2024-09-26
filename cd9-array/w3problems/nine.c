#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int n = 5 ;
    printf("input the number of elements to be stored in the array: %d" , n );

    int arr[5];
    for(int i = 0 ; i< n ;i++)
    {   
        printf("\nelement no %d " , i+1 );
        scanf("%d" , &arr[i]);
    }

    int even[5];
    int odd[5];
    int j = 0 , k = 0 ;

    for(int i = 0 ; i< n ;i++)
    {
        if( arr[i] % 2 == 0)
        {
            even[j] = arr[i];
            j++;
        }
        else {
            odd[k] = arr[i];
            k++ ; 
        }
    }

    printf("\n then even elements are: ");
    for(int i = 0 ; i< j ;i++)
    {
        printf("%d " , even[i]);
    }

    printf("\n the odd elements are: ");
    for(int i = 0 ; i< k ; i++)
    { 
        printf("%d " , odd[i]);
    }

    printf("\n\n");
    return 0 ;
}