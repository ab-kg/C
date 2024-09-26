#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n ;
    printf("input the size of the array\n");
    scanf("%d" , &n);
    int arr[100];
    // form the array
    for(int i= 0 ; i< n ; i++)
    {   
        printf("Element no %d: " , i);
        scanf("%d" , &arr[i]);
    }

    // value to be inserted 
    int p ;
    printf("vaue to be inserted\n");
    scanf("%d" , &p);

    // index where value to be inserted
    int index ;
    printf("index to be inserted\n");
    scanf("%d" , &index);

    for(int i = n ; i >= index ; i--)
    {
        arr[i+1] =arr[i];
    }

    arr[index] = p ;

    for(int i = 0 ; i< n+ 1 ; i++)
    {
        printf("%d " ,arr[i]);
    }

    return 0 ;
}