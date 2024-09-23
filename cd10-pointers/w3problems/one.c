#include <stdio.h>


int main()
{   
    int n , o ,  m = 10 ;
    int *z = &m ;

    printf("%d\n" , &m );
    printf("%d\n" , &n);
    printf("%d\n" , &o);
    printf("%d\n" ,z);
    printf("%d\n" ,*z);
    printf("%d\n" ,&z);

    // char str[] = "cd";
    // char *cht = str ;
    // printf("%c" , *cht);

    return 0 ;
}


