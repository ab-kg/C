#include <stdio.h>

int sum(int n)
{   
    int res ;
    if(n == 1 )
    {
        return 1 ;
    }else
    {
        res  = n + sum(n-1);
        
    }
    return res ; 
}

int main()
{   
    int n = 5 ; 
    int summ ;
    summ = sum(n);
    printf("the sum of numbers from 1 to 5: %d\n" , summ );
    return 0 ;
}

// lesson learnt : the best way to write program is giving by good variable names 
// there will be real issues with your code if you dont give good variable names 
