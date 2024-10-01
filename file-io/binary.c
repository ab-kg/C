#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // int a = 12 ; 
    // long long a  = 12;
    struct a {
        int a ;
        int b ;
    };

    struct a mystruct ;
    mystruct.a = 3;
    mystruct.b = 10 ;

    // printf("Decimal: %d\n" , a );
    // printf("Hexadecimal: %08x\n" , a);
    // printf("Ocatal %011o\n" , a);
    printf("\n\n");
    long long  i , j ;
    for(i = 0 ; i< sizeof(struct a) ; i++)
    {   
        char byte = ( (char*)&mystruct)[i] ;
        for(j = 8 ; j >= 0 ; j--)
        {   
            char bit =  (byte >> j) & 1 ;   
            printf("%hhd" , bit);       
        }
        printf(" ");
    }
    printf("\n\n");
    return 0 ;
}

// a is integer 
// a is store in 4 bytes
// we go to each byte
// and then we go to each bit in byte that is available 