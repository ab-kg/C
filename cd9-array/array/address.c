#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // int x= 12 ;
    char str[16] = "example string";
    // printf("%s\n" , &str[0]);
    printf("Address %p\n" , str); // gives the address of first character in the string 
    // printf("Address %p\n" , str + 1); // gives the address of second character in  the string
    printf("Address %p\n" , &str);
    printf("Address %p\n" , &str[0]);

    printf("Address %p\n" , &str[0] + 1); // gives the address of second character in the string
    // printf("Address: %p\n" ,&str + 1 ); // gives the address of a place in memory which comes after 16 characters of string 
    // printf("Address: %p\n" ,&str ); // gives the address of a place in memory which comes after 16 characters of string 
    printf("\n");

    // printf("size of array: %llu\n" , sizeof(&str[0]));
    return 0 ;
}

// address work in string is fishy 
// it decays to a pointer 

