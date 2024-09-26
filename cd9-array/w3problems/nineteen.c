#include <stdio.h>
#include <stdlib.h>


int main()
{
    int arr[2][2];
    for(int i = 0 ; i < 2 ; i++)
    {
        for(int j = 0 ; j < 2 ; j++)
        {   
            printf("the element arr[%d][%d] " , i , j);
            scanf("%d", &arr[i][j]);
        }
     
    }

    int marr[2][2];
    for(int i = 0 ; i < 2 ; i++)
    {
        for(int j = 0 ; j < 2 ; j++)
        {   
            printf("the element arr[%d][%d]" , i , j);
            scanf("%d", &marr[i][j]);
        }
       
    }

    // Display the first matrix 
    for(int i= 0 ; i< 2 ; i++)
    {
        for(int j = 0 ; j< 2 ;j++)
        {
            printf("%2d" , arr[i][j]);
        }
        printf("\n");
    }

    // Display the second matrix 
    for(int i= 0 ; i< 2 ; i++)
    {
        for(int j = 0 ; j< 2 ;j++)
        {
            printf("%2d" , marr[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    // Calculate the sum of the matrices 
    for(int i = 0 ; i < 2 ; i++)
    {
        for(int j = 0 ; j < 2 ; j++)
        {
            arr[i][j] = arr[i][j] + marr[i][j];
        }
    }
    printf("\n");

    for(int i = 0 ; i < 2 ; i++)
    {
        for(int j = 0 ; j < 2 ; j++)
        {
            printf("%4d " , arr[i][j] );
        }
        printf("\n");
    }

    return 0 ;
}