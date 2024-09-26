// Character arrays and pointers

// IN this video we are learning about character arrays and pointers and how they are similar to each other 
// Arrays are always to fucntion as reference 

#include <stdio.h>
#include <string.h>

void print(const char *C)
{
    while(*C != '\0')
    {
        printf("%c" , *C);
        C++;
    }

    printf("\n");
}

int main()
{
    char *C = "mello meow";
    print(C);
}

// ---------------------------------------------

// char *C = "hello";
// here we cannot change the C , it is constant as it is stored in the text  block


// 4.Heap 
// 3.Stack 
// 2.static /Global 
// 1.code - text 







// ----------------------------------------------


// int main()
// {
//     // char C[5];
//     // C[0] = 'A';
//     // C[1] = 'B';
//     // C[2] = 'H' ;
//     // C[3] = 'N';

//     // printf("%s" , C);

//     // int len = strlen(C);
//     // printf("Length = %d\n" , len);

//     char c1[6]  = "Hello";
//     char * c2 ;
//     c2 = c1 ;
//     printf("%c" , c2[0]);

//     c2[0] = 'A';
//     printf("%c" , c2[0]);
//     return 0 ;
// }






