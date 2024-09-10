
#include <stdio.h>

#define N 10 

int main()
{

    int arr[10] = { [0] =  1 , [5] = 2 , [6] = 3};  
    int a[N] ,i ;
    for(int i = 0 ; i < N ; i++)
    {
        printf("enter the input for index %d: , i");
        scanf("%d", &a[i]);
    }

    printf("array of the elements are as follows");
    for(int i = 0 ; i<N ; i++)
    {
        printf("%d " , a[i]);
    }

    return 0 ;
}


// sizeo of memory array = 5*sizeof(int)