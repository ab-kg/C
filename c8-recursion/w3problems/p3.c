#include <stdio.h>

int series(n)
{   
    int ans ;
    if(n == 0)
    {
        return 0;
    }else if(n ==1)
    {   
        printf("%d" , 1);
        return 1 ;
    }else 
        printf("%d");
        return (series(n-1) + series(n-2));
}

int main()
{
    int n = 10;
    for(int i = 0 ; i< n ; i++)
    {
        printf("%d" ,  fibonacci(i));
    }

    printf("\n");
    return 0 ;
}
