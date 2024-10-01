#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Complex{
    int real ;
    int imaginary;
} Complex ;

/*
  (a + ib)*(c + id) = ac + i(ad + bc) - bd 
  (a + ib) + (c + id) = (a + c) + i(b + d)
*/

int mult(struct Complex c1 ,struct  Complex c2)
{   
    Complex ans ;
    ans.real = c1.real*c2.real  - c1.imaginary*c2.imaginary ;
    ans.imaginary  = c1.real*c2.imaginary + c2.imaginary*c2.real ;

    printf("%d + i %d" , ans.real , ans.imaginary);
    return 0 ;
}

int add(Complex c1 , Complex c2)
{
    Complex ans ;
    ans.real = c1.real + c2.real ;
    ans.imaginary = c1.imaginary + c2.imaginary ;

    printf("%d + i %d" , ans.real , ans.imaginary);
    return 0 ;
}

int main()
{
    Complex c1 , c2 ;

    printf("input data for complex nos , (real , imaginary)");
    scanf("%d %d" , &c1.real , &c1.imaginary);

    printf("input data for complex nos , (real , imaginary)");
    scanf("%d %d" , &c2.real , &c2.imaginary);

    // mult( c1 , c2);
    add(c1 , c2);
    // Complex add = addd(Complex c1 , Complex c2);

    return 0 ;
}

