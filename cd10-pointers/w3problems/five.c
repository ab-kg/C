#include <stdio.h>

int addNumbers(int *n1 , int *n2);

int main()
{
    int a = 5 , b = 5; 

    int sum = addNumbers(&a , &b );

    printf("%d" , sum);

    return 0 ;
}

int addNumbers( int *n1 , int *n2)
{
    int sum = *n1 + *n2 ;
    return sum ;
}

// this method we are using is called - call by reference 
// we are not directly using the variable , we are using to by reference , and we are using pointers to do this 
// In this program we are trying to add two numbers by calling it by reference 
