#include <stdio.h>
#include <stdlib.h>


int main()
{
    int arr[100][100];
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {   
            printf("the element arr[%d][%d]" , i , j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            // scanf("%d", &arr[i][i]);
            printf("%d " , arr[i][j]);
        }
        printf("\n");
    }

    return 0 ;
}