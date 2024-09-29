#include<stdio.h>
#include<stdlib.h>

int digits(int n)
{   
    static int ctr = 0 ;
    if(n != 0 )
    {
        ctr++;
        digits(n/10);
    }
    return ctr ;
}

int main()
{
    int n = 12349;

    int tr = digits(n );
    printf("%d" , tr);
    return 0 ;
}