#include <stdio.h>

int main(){

    int a , b;
    printf("enter the first number");
    scanf("%d" , &a);
    printf("enter the second number");
    scanf("%d" , &b);

    printf("a/b= %d\n" , a/b);
    printf("a %% b = %d" , a%b);
    return 0 ;
}




/*
difference between post assignment and pre assignment !

x = ++a

a = 5 

x = 6
a = 6


x = a++

a = 5 
x = 5 
a = 6

*/