// void swap(int *px , int *py)
// {
//     int temp ;
//     temp = *px ;
//     *px = *py ;
//     *py = temp;
// }

// #define size 4
// int n , array[size] , getint(int *)

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int getch(void);
void ungetch(int);

int getint(int *pn)
{
    int c , sign ;
    while(isspace(c = getch()));

    if(!isdigit(c) && c != EOF && c != '+' && c != '-')
    {
        ungetch(c);
        return 0 ;
    }
    sign = ( c == '-') ? -1 : 1;
    if(c == '+' || c == '-')
        c = getch();
    
    for(*pn = 0 ; isdigit(c) ; c = getch())
    {
        *pn = 10 * *pn + ( c-'0');
    }
    *pn *= sign ;
    if( c != EOF)
        ungetch(c);
    return c ;    
}


