
#include <stdio.h>

int main()
{
    int arr[2][3] = { 1 , 2 ,3 , 4, 5 , 6  };

    printf("Row total");
    int sum ; 
    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0 ; j < 5 ; j++)
        {
            sum += arr[i][j];
        }
        printf("%d" , sum);
        sum = 0 ;
    }

    printf("column total");
    int csum ;

    for(int j = 0 ; j < 3 ; j++)
    {
        for(int i = 0 ; i < 2 ; i++)
        {   
            csum += arr[i][j];
        }
        printf("%d" , csum);
        sum = 0 ; 
    }
    

    
}


