#include <stdio.h>

int main()
{
    char str1[50];
    char revstr[50];
    char *stptr = str1 ;
    char *rvptr = revstr ;
    int i = -1 ;

    printf("input a string ;");
    scanf("%s" ,str1 );
    
    while(*stptr)
    {
        stptr++ ;
        i++;
    }


    return 0 ;
}