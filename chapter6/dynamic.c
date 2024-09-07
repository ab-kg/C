#include <stdio.h>

// static scoping
// here if we dont find the variable value , we look for the global scope then we come down 
// from top .
// ans = 25

// by default in static scoping is used in C

// dynamic scoping
// ==> Here if we dont find the variable value ,we look for the function block from which this 
// function was called .
// ans = 30

int fun1(int);
int fun2(int);
int a = 5;

int main()
{
    int a = 10 ;
    a = fun1(a);
    printf("%d" , a);
}

int fun1(int b)
{
    b = b+ 10 ;
    b = fun2(b);
    return b;
}

int fun2(int b)
{
    int c ;
    c = a+ b;
    return c;
}

