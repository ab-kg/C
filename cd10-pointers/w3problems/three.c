#include <stdio.h>


int main()
{
    int m = 300 ;
    float fx = 300.600006;
    char cht = 'z';

    printf("%d\n" , &m);
    printf("%d\n" , *(&m));

    int *ptr = &m ;
    printf("\n");
    printf("\n");
    printf("%d\n" , ptr);
    printf("%d\n" , *ptr);

    return 0 ;
}

// *(&m)  --> this here gives us the dereference of the address of m , & symbols gets us the address of the variable and * symbol gets us the value at that address
