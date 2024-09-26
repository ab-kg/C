#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n = 10 ;
    int arr[n] ;
    for(int i = 0 ; i < n ; i++)
    {
        arr[i] = i;
    }   

    for(int i = n ; i>0 ; i--)
    {
        printf("%5d " ,arr[i-1]);
    }

    return 0 ;
}