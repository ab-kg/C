#include <stdio.h>
#include <stdbool.h>

typedef unsigned int t_flag ;
#define FLAG_A (1 << 0  )
#define FLAG_B ( 1 << 1 )
#define FLAG_C ( 1 << 2 )

// typedef enum {
//     FLAG_A = ( 1<<0) , 
// }

// int f(int x , bool is_added , bool is_squared , bool is_not)
// {
//     if(is_added)
//         x += x ;
//     if (is_squared)
//         x *= x ;
//     if (is_not)
//         x = ~x;
//     return x ;
// }

int f(int x , t_flag flags)
{
    if(flags & FLAG_A)
        x += x ;
    if(flags & FLAG_B)
        x *= x;
    if(flags & FLAG_C)
        x = ~x;
    return x ;
}

int main(void)
{
    printf("%d\n" , f(23 , FLAG_A ));
    printf("%d\n" , f(23 , FLAG_B  | FLAG_C ));
    return 0 ;
}
