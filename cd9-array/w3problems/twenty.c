#include <stdio.h>
#include <stdlib.h>


int main()
{
    int arr[2][2] = { { 1  , 2}, { 3 , 4}};
    int brr[2][2] = { { 5 ,6 } ,{7 ,8}};

    // multiplication of matrices 
    // how do we achieve this 

    int crr[2][2];

    int sum ;
    for(int i = 0 ; i< 2 ; i++)
    {
        for(int j = 0 ; j < 2 ;j++)
        {   
            // matrix multiplication is done in this manner 
            sum = 0 ;
            for(int k = 0 ; k < 2 ; k++)
            {
                sum  = sum + arr[i][k]*brr[k][j];
            }
            crr[i][j] = sum ;
        }
    }

    for(int i = 0 ; i< 2 ; i++)
    {
        for(int j = 0 ; j < 2 ;j++)
        { 
              printf("%d " , crr[i][j])  ;
        }
        printf("\n");
    }

    return 0 ;
}

/*          
1 2      5 6
      *   
3 4      7 8 
*/