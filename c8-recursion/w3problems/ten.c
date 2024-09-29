#include<stdio.h>
#include<stdlib.h>


// factorial of number using recursion

int recursion(int n)
{
    if(n == 1)
    {
        return 1 ;
    }
    return n*recursion(n-1);
}

int main()
{
    int n = 5 ;
    int ans = recursion(n);
    printf("%d" ,ans);
    return 0 ;
}



