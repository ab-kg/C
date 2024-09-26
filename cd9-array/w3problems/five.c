#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int arr[100] ;
    int n , mm = 1 ,ctr = 0 ;
    int i , j ;

    printf("input the number of elements to be stored in the array: ");
    scanf("%d" , &n);

    printf("Input %d elements in the array \n");
    for(int i = 0 ; i< n;i++)
    {
        printf("Element - %d : " , i );
        scanf("%d" , &arr[i]);
    }

    for(i = 0 ; i< n ; i++)
    {   
        int ctr = 0 ;
        for(j = i+ 1 ; j < n ; j++)
        {
            if(arr[i] == arr[j])
            {
                ctr++ ;

            }
        }
        if(ctr == 0 )
        {
            printf("%d" ,arr[i]);
        }
    }

    printf("Total number of duplicate elements found in the array: %d\n", ctr);
    // they have just asked for duplicates and not anything particular . 
    return 0 ;
}

