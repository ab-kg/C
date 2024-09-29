#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

// void getNextFive(int x , int *result)
// {
//     int i ;
//     for(int i = 0 ; i< 5 ; i++)
//     {
//         result[i] = x + i + 1;
//     }
// }

// we can dynamically allocate things man 

int* getNextFive(int x )
{   
    int* result = malloc(sizeof(int)*5);
    int i ;
    for(int i = 0 ; i< 5 ; i++)
    {
        result[i] = x + i + 1;
    }

    return result ;
}

int main(int argc , char* argv[])
{
    int x= 20 ;
    // int arr[5];
    int* arr  =  getNextFive(x );

    for(int i = 0 ; i<  5 ; i++)
    {
        printf("%d " , arr[i] );
    }
    free(arr);
    return 0 ;
}