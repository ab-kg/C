#include <stdio.h>

int add(int b []  , int len)
{
    int sum = 0 , i ;
    for(i = 0 ; i< len ; i++)
    {
        sum += b[i];
    }
    return sum ;
}


int main()
{
    int a[] = { 1 , 2 , 3 , 4 };
    int len = sizeof(a)/sizeof(a[0]);
    printf("%d" , add(a , len));
    return 0 ;
}

// here it feels like we are passing the whole array as an argument for function 
// but the reality is we are just passing the base address to function 

// a = 1000 1004 1008 1012
//      |   
// b -> |

// b is acts as pointer to a 

