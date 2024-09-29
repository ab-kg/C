#include<stdio.h>
#include<stdlib.h>

// Find GCD of two numbers using recursion 

int findGCD(int num1 , int num2)
{
    while(num1 != num2)
    {
        if(num1 > num2)
        {
            return findGCD(num1-num2 , num2);
        }else{
            return findGCD(num1 , num2-num1);
        }
    }

    return num1 ;
}

int main()
{   
    int num1= 10 , num2 = 24 ;
    int gcd ;
    gcd = findGCD(num1 , num2);
    printf("%d is the gcd" , gcd);
    return 0 ;
}