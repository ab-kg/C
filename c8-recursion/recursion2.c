#include <stdio.h>

// how to write a recursive program ?

// 1. divide the problem
// 2. base condition to stop the recursion

// Problem: Calculate the factorial of a 


int factorial(int n)
{    
    if( n == 0 )
    {
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}


int main()
{
    int n = 10 ;
    int ans = factorial(n);
    printf("Factorial of a number %d is %d" , n , ans);
    return ans ;
}



// Recursive fn

/*
fn()
if{              => base case

}else{           => recursive procedure

}

*/