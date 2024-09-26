#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c[11] = "crazymeyou";
    char *ca ;
    for( ca = c + 9 ; ca >= c ; ca--)
    {
        printf("%c" , *ca );
    }

    return 0 ;
}



