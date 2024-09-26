#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int arr[100];
    int n ;
    printf("input the number of elements to be stored in the array: ");
    scanf("%d" , &n);
    printf("Input %d elements in the array \n");

    for(int i = 0 ; i< n;i++)
    {
        printf("Element - %d : " , i+1 );
        scanf("%d" , &arr[i]);
    }

    for(int i = 0 ; i < n ; i++)
    {
        int count = 1 ;
        for(int j = 0 ; j< n ;j++)
        {
            if(i != j)
            {
                if(arr[i] == arr[j])
                {
                    count++ ;
                }
            }
        }
        printf("frequency of %d is %d \n" , arr[i] , count);
    }
    return 0 ;
}


// I think You have very less chance of winning ABhishek 