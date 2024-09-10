#include <stdio.h>

int main()
{   
    int i = 10  , j = 20 ; 
    int *p , *q ;
    p = &i ;
    q = &j ;

    printf("%d " , *q);
    *q = *p;
    printf("%d " , p ); 
    printf("%d " , *p ); 
    printf("%d " , q ); 
    printf("%d " , *q ); 
    return 0 ;
    
}



