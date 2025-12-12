#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *literal = "i am string literal"    ;
    char array[] = "I am a string literal";

    // stdup allocates memory and returns a pointer to that memory 
    
    char *s = strdup(literal);

    array[0] = '#';
    s[0] = '#';

    printf("%s\n" , s);
    printf("%s\n", array);
    return 0 ;
}

