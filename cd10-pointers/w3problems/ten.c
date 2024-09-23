#include <stdio.h>
#include <string.h>

int main()
{
    printf("input the string :");
    char s[25] ;
    scanf("%s" , &s);
    // fgets(s , sizeof(s) , stdin);

    char *x = s;
    int count = 0 ;
    while( *x != '\0')
    {
        x += 1;
        count += 1;
    }

    printf("the length of string is %d" , count);
    return 0 ;
}


