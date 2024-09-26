#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 

int main()
{
   // inserting the values in array
    int arr[MAX_SIZE];
    int n ;
    printf("input the no of elements you want to insert");
    scanf("%d" , &n);
 
    for(int i = 0 ; i < n ;i++)
    {   
        printf("Element no %d: " , i);
        scanf("%d" , &arr[i]);
    }

    // value 
    printf("input the value to be inserted\n");
    int p ;
    scanf("%d" , &p);
    

    printf("the existing array list is\n");
    for(int i = 0 ; i< n ;i++)
    {
        printf("%5d" , arr[i]);
    }

    // determine the position where the new value will be inserted 
    int index ;
    for(int i= 0 ; i < n ; i++)
    {
        if(p < arr[i])
        {
            index  = i ;
            break ;
        } else {
            index = i + 1 ;
        }
    }

    // 10 20 30 40 
    // value = 25 
    // i =  3 break 

    // move all data at the right side of the array to make space 
    for(int i = n ; i >= index ; i--)
    {
        arr[i + 1] = arr[i];
    }

    // insert the new value at the proper position 
    arr[index] = p ;

    // display the array after insertion 
    printf("\nthe insert array list is\n");
    for(int i = 0 ; i< n+1 ;i++)
    {
        printf("%5d ", arr[i]);
    }
    printf("\n");
    return 0 ;
}