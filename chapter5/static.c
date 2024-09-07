#include <stdio.h>

//  all functions are global by default
// restrict its access by using static keyword 

static int fun(int , int);

int main(){
    int sum = fun(3 , 4);
    printf("%d" , sum);
    function();
    return 0;
}

int function(){
        int sum2 = fun(4 , 4);
        printf("%d" , sum2);
        return 0;
    }


static int fun( int a , int b)
{
    int c ;
    c = a+b;
    return c ;
}


