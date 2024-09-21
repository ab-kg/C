#include <stdio.h>

// string literals
// "Hello Everyone"

// int main()
// {
//     printf("%s" , "Hello world! .\
//     next line ");

//     printf("%s" , "Hello world!" 
//     "-- next line");
//     return 0 ;
// }

// string literals are stored as an array of characters
// E A R T H \0

// In ASCII \0 has value of 0 
// and 0 has a value of 48

// printf("Earth");
// this is equivalent to passing the pointer to letter E ;


// ----------------------
// Writing a string literal is equivalent to writing pointer to the first letter of strint literal


// String literal Cannot be modified 
// String constants => read only memory

// String literal VS Character Constant 
// Double qoute VS Single Qoute

// printf fn expects string literal and not a character constant 
// printf("\n") - correct
// printf('\n) - wrong


// --------------------------------------------------

char s[6] = "Hello";
char s[6] = { 'H' , 'e' , 'l' , 'l' , 'o' , '\0'};

// Above character array can be used to modify 

// String is asssigning to array
// this is not string literal

// undefined behaviour
char s[5] = "Hello";


int main()
{   
    char s[5] = "Hello";
    char t[5];
    
    int i ;
    for(int i = 0 ; s[i] != '\0' ; i++)
    {
        t[i] = s[i];
    }

    printf("%s" , t);
    return 0 ;
}


