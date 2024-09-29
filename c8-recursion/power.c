#include <stdio.h>
#include <stdlib.h>

int power(int base , int exp)
{
    if(exp == 0)
    {
        return 1 ;
    }else{
        return base*power(base , exp-1);
    }
}

int main()
{
    int base = 2 ;
    int exp = 4 ;
    // 2* 2* 2* 2
    printf("%d power of %d is %d\n" , base , exp , power(2 , 4));
    return 0 ;  
}


// time complexity 
// O(exp) => one recursive call for each value of the exponent
// space complexity 
// O(exp) => due to recursion stack


