#include "lib.c"
#include <stdio.h>
#include <string.h>

int mul(int a , int b)
{
    int result = a * b;
    return result ;
    puts("this will not be executed");
}

int fib(int n )
{
    if(n <= 1 )
    {
        return n ;
    }

    return fib(n-1) + fib(n-2);
}


void printing()
{
    puts("Welcome");
    printf("3*4 = %d\n" , mul(3 , 4));
    printf("Fibonacci number 10 is %d\n" , fib(10));
}


void looping()
{

    int c = 100 ;
    while(c > 0)
    {
        printf("%d\n" , c);
        c = c-7;
    }

    for(int i = 0 ; i < 100 ; i+= 7)
    {
        printf("%d\n" , i);
    }

}
