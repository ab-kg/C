// Look up table 

// python dictionaries
// map in C++

#include <stdio.h>

enum foo{
    foo_2 = 0 , 
    foo_3 , 
    foo_4 
};

static int squares[] = {
    [foo_2] = 4 ,
    [foo_3] = 2 ,
    [foo_4] = 16 
};

static char case_convert[] = {
    ['a'] = 'A' ,
    ['b'] = 'B' , 
    ['c'] = 'C'
};

int main(void)
{
    // printf("%d\n" , squares[foo_2]);
    // printf("%d\n" , squares[foo_3]);
    // printf("%d\n" , squares[foo_4]);

    printf("%c\n" , case_convert['a']);
    printf("%c\n" , case_convert['b']);
    printf("%c\n" , case_convert['c']);    
    return 0 ; 
}   


