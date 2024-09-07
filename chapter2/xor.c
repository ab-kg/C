

#include <stdio.h>

int main() {
    int a = 4 , b = 3;
    a = a^b;
    b = a^b;
    a = a^b;

    char x = 7 ;
    x ^= 5;   
    printf("%d" , printf("%d" , x+=3)) ;
    // printf("After XOR , a= %d and b = %d" , a , b);
    return 0 ;

}



/*
4 = 0100
3 = 0011

a = a^b
a = 0111

b = a^b
b = 0100

a = a^b
a =  0011

*/

