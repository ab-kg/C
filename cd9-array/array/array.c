#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum(int *ptr , int *sum )
{
    int *ptr2 ;
    for(ptr2 = ptr ; ptr2 < ptr + 3 ; ptr2++)
    {
        *sum  = *sum + *ptr2 ;
    }
    return 0 ;
}

// actually array 

// int sum2(int* arr , int n )

// this is how array works 
// we are still passing pointers



// array is passing by reference 
int sum2(int arr[] , int n )
{   
    int i , s = 0 ;
    arr[0] = 10 ;
    for(i = 0 ; i < n ; i++)
    {
        s = s + arr[i];
    }
    printf(" size from sum function: %llu\n" , sizeof(arr));
    return s ;
}


// 64 bit compiler says pointers of size 8 byte 

int main()
{
    int arr[] = { 1 , 2, 3 };
    int s = 0 ;
    // sum(arr , &s);
    int s2 = 0 ;
    s2 = sum2(arr , 3);
    printf("Sum: %d\n" , s2);
    printf("First number: %d\n" , arr[0]);
    printf("Size : %llu\n" , sizeof(arr));
    return 0 ;
}