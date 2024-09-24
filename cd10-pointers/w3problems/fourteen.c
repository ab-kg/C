// sorting an array using pointers

// sorting algorithms 
// Bubble Sort 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a , i , j , tmp , n ;

    printf("input the number of elements to store in the array: ");
    scanf("%d" , &n);

    int count = 1;
    // while(n != 0 )
    // {
    //     scanf("%d" , a+ count -1);
    //     count++;
    // }

    for(i = 0 ; i < n ; i++ )
    {
        printf("Enter the element No: %d" , i+1);
        scanf("%d" , a + i);
    }

    for( i = 0 ; i < n ; i++)
    {
        for( j= i + 1 ; j < n ; j++)
        {
            if( *(a+ i) >*(a + j)  )
            {
                tmp = *(a + i );
                *(a + i) = *(a + j);
                *(a + j) = tmp ;
            }
        }
    }

    // displaying the sorted array elements

    for(i = 0 ; i < n ; i++)
    {
        printf("element -%d : %d \n" , i + 1 , *(a + i));
    }

    // we are using the basic sorting technique 
    return 0 ;
}
