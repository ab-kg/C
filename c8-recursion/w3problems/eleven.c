#include<stdio.h>
#include<stdlib.h>

// decimal to binary using recursion

long recursion(int n)
{
    static long biNO , r , factor = 1 ;

    if(n != 0)
    {
        r = n%2 ;
        biNO = biNO + r*factor ;
        factor = factor*10 ;
        recursion(n/2);
    }
    return biNO;
}


// 10

// 10%2 => 0 
// 10/2 = 5

// 5%2 => 1
// 5/2 = 2

// 2%2 = 0 
// 2/2 = 1

// 1%2 = 1 
// 1/2 = 0 

int main()
{
    int n = 10 ;
    long binary = recursion(n);
    printf("%ld" , binary);
    return 0 ;
}

