#include <stdio.h>


int sumOfDigits(int n )
{
    if(n == 0 )
    {
        return 0 ;
    }else {
        return (n % 10) + sumOfDigits(n/10);
    }
}


int main()
{
    int num = 10;
    printf("sum of digits of %d is %d\n" , num, sumOfDigits(num));
    return 0 ;
}


// time complexity
// O(log(n)) log base 10 
