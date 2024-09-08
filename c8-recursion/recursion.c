#include <stdio.h>

//activation record 

//fun(1)
//fun(2)
//fun(3)
//main

int fun(n)
{
    if(n==1)
    {
        return 1;
    }else {
        return 1 + fun(n-1);
    }
}

int main()
{
    int n = 3 ;
    printf("%d" , fun(n));
    return 0 ;
}