#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char text[100];
    printf("Type a line of text here: ");
    // scanf("%[^\n]s" , text); 
    // text is array and it returns a pointer to the first character to the word

    fgets(text ,100 , stdin );
    // we need to know no of letters before  

    text[strlen(text)-1] = '\0';
    int i ; 
    for(i= 0 ; i<= strlen(text) ; i++)
    {
        printf("%d " , text[i] );
    }

    printf("\n");
    printf("You typed the line: %s\n" ,text);

    // getchar();
    // ------------------

    // char text2[100];
    // printf("Type a line of text here: ");
    // scanf("%[^\n]s" , text2); 
    // // // text is array and it returns a pointer to the first character to the word
    // printf("You typed the line: %s\n" ,text2);

    return 0 ;
}