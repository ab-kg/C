#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printArray(char** arr , size_t num)
{
    int i = 0 ; 
    for( i  ; i < num ; i++)
    {
        printf("%s\n" , *arr);
    }
}


int main()
{   
    char* arr[] = {"Example String " , "And another one " , "And so on...."};
    char* elem = "example string";
    // char *ref = &elem[0];
    /*
    Begin Stack 
    1 byte  - char - 'E' 
    1 byte  - char - 'x' 
    1 byte  - char - 'a' 
    1 byte  - char - 'm' 
    .........
    End stack 
    */

    // printArray(&elem , 1);
    // printArray(arr , 3);

    printArray(&elem , 1) ;
    return 0 ;
}


// array are contigous place in memory 
// 