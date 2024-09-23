#include <stdio.h>


int main()
{
    int n = 3;
    int arr[n];
    for(int i = 0 ; i< n ; i++)
    {
        printf("enter the element no %d : " , i+1);
        scanf("%d" , &arr[i]);
    }

    // int temp = arr[2];
    // arr[2] = arr[1];
    // arr[1] = arr[0];
    // arr[0] = temp;


    for(int i = 0 ; i< n ; i++)
    {
        printf("value of the element no :%d is : %d \n"  , i+1 , arr[i]);
    }

    return 0 ;
}


