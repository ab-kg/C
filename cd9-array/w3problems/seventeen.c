#include <stdio.h>
#include <stdlib.h>


int main()
{
    int arr[6] = { 1 ,24 , 434 , 344, 398 , 6 };

    int s  = arr[0];
    for(int i = 0 ; i < 6 ; i++)
    {
        if( arr[i] < s)
        {
            s = arr[i];
        }
    }

    printf("%d" , s);
    return 0 ;
}