#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main()
// {
//     char* aplha ;
//     char A = 'A';
//     aplha = &A ;
//     for(int i = 0 ; i < 26 ; i++)
//     {
//         printf("%c" , *aplha);
//         (*aplha)++; // increment the value pointed by the pointer , not the pointer itself
//     }

//     return 0 ;
// }

int main()
{
    char A = 'A';
    char* a = &A;

    for(int i = 0 ; i < 26 ; i++)
    {
        printf("%c" , *a);
        (*a)++;
    }
    return 0 ;
}