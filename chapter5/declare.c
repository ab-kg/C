#include <stdio.h>

char fun();
int add(int , int);

int main(){
    int m = 20 , n = 30 , sum ;
    sum = add(m , n);
    //actual parameters => sending the values
    printf("sum is %d" , sum);
}

// formal parameters => recieving the values
int add(int a , int b )
{
    return ( a + b);
}

char fun()
{
    return 'a';
}

