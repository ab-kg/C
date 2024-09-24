#include <stdio.h>


int main()
{
    printf("input the string");
    char c[50];
    scanf("%s" , c);

    char *pt ;
    pt = c ;
    
    int ctrV = 0 ;
    int ctrC = 0 ;

    while(*pt != '\0')
    {   
        if (*pt == 'A' || *pt == 'E' || *pt == 'I' || *pt == 'O' || *pt == 'U' ||
            *pt == 'a' || *pt == 'e' || *pt == 'i' || *pt == 'o' || *pt == 'u') {
            ctrV++; // Increment vowel counter if the character is a vowel
        } else {
            ctrC++; // Increment consonant counter for other characters
        }
        pt++;
    }

    printf("the nof volwels : %d\n the no of consonants : %d\n" , ctrV , ctrC );

    return 0 ;
}


