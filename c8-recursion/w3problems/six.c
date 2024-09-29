#include<stdio.h>
#include<stdlib.h>

int sum(int n)
{   

    if(n == 0)
    {
        return 0 ;
    }
    return ((n%10) + sum(n/10));
}


int main()
{
    int n = 12345 ;

    int sum1 = sum(n);
    printf("%d" , sum1);
    return 0 ;
}

