#include <stdio.h>

int numbers(n)
{
    if( n < 2)
    {   
        printf("%d " , 1);
        
    }else {
        printf("%d " , n + numbers(n-1));
        
    }
    return 0 ;
}

int main()
{   
    int n = 50;
    numbers(n);
    return 0 ;
}
