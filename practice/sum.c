#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int arr[4] = {4 , 2 , 1 , 5};
    int target = 7 ;
    for(int i= 0 ; i< 4 ; i++)
    {
        for(int j = i+1 ; j < 4 ; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                printf("indices are %d %d" , i , j);
                break;
            }
        }
    }
    return 0 ;
}