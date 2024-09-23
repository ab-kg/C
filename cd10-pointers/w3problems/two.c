#include <stdio.h>


int main()
{
    int m = 29 ;
    int *ab = &m ;

    printf("%d\n" , ab);
    printf("%d\n" , *ab);

    m = 34 ;
    printf("%d\n" , ab);
    printf("%d\n" , *ab);

    *ab = 7 ;
    printf("%d\n" , &m );
    printf("%d\n", m);

    return 0 ;
}


