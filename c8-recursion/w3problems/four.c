#include <stdio.h>
#include <stdlib.h>


void recursion(int arr[] , int start , int end)
{
    if(start >= end)
        return ;
     
    printf("%d " , arr[start]);

    recursion(arr , start+1 , end);
}


int main()
{   
    int arr[5] = {1 , 2 , 3 ,4,5};
    recursion(arr , 0 , 5) ;

    return 0 ;
}