#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n ;
    printf("input the size of the array\n");
    scanf("%d" , &n);
    int arr[100];
    // form the array in ascending order
    for(int i= 0 ; i< n ; i++)
    {   
        printf("Element no %d: " , i);
        scanf("%d" , &arr[i]);
    }

    int index ;
    printf("input the index where to delete");
    scanf("%d" , &index);

    // here we are deleting the element by overriding 
    // that is left shifting all the elements 
    for(int i = index ; i < n ; i++)
    {
        arr[i ] = arr[i + 1];
    }

    // printing the new array after deleting
    printf("new array after deleting\n");
    for(int i = 0 ; i< n-1 ;i++)
    {   
        printf("element at index %d is  %d\n" , i ,  arr[i]);
    }

    return 0 ;
}