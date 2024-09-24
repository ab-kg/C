// Self referential Structures

// are those one or more pointers points to the structure of the same type

#include <stdio.h>
#include<stdlib.h>

struct self {
    int p ;
    struct self *ptr ;
};

struct code {
    int i ;
    char c ;
    struct code *ptr ;
};

int main()
{
    struct code var1 , var2 ;
    var1.i = 12 ;
    var1.c = 'A';
    // var1.ptr = NULL;

    var2.i = 12 ;
    var2.c = 'x';
    var2.ptr = NULL;

    var1.ptr = &var2 ;

    printf("%d %c" , var1.ptr->i , var1.ptr->c);

    return 0 ;
}



// how self referential structures are useful 
// linked list 




