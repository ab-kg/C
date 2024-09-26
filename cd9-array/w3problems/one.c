#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int arr[10];
    arr[0]=1;
    for(int i=1  ; i<= 10 ; i++)
    {
        arr[i] = i ;
        printf("%d " ,arr[i-1]);
    }

    return 0 ;
}