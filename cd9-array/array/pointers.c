#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc , char* argv[])
{   
    int arr[] = {7 , 8 , 9 , 10 , 11};
    int n = 5 ;

    int* ptr ;

    for(ptr = arr ; ptr < arr + n ; ptr++)
    {
        printf("%d " , *ptr);
    }


    return 0 ;
}

