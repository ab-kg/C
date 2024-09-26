#include <stdio.h>
#include <stdlib.h>

// second largest element in an array

int main()
{
    int arr[6] = { 1 ,24 , 434 , 344, 398 , 6 };

    int sl = arr[0] ;
    int l = arr[0];
    for(int i = 0 ; i< 6 ;i++)
    {
        if(arr[i] > l)
        {   
            sl =  l;
            l = arr[i];
        }else if(arr[i] > sl )
        {
            sl = arr[i];
        }else{
            sl = sl ;
            l = l ;
        }
    }

    printf("second largest element in the arry is %d" , sl);
    return 0 ;
}