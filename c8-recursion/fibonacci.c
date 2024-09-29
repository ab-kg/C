#include <stdio.h>

// FIbonacci series 
// 0 1 1 2 3 5 8 13 21 34 

int fibonacci(int n )
{   
    // base case 
    if( n == 0 )
    {
        return 0 ;
    }else if( n == 1)
    {
        return 1;
    }else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
    return n ;
}


int main()
{   
    int n = 4 ;
    printf("Fibonacci number at position %d is %d " , n , fibonacci(n));
    return 0 ;
}

// time complexity 
// O(2^n)
// Space Complexity 
// O(n)


