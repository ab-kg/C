#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strrev(char*)

char * decimalToBinary(int  decimal)
{
    char* binary = (char*)malloc(33);
    int i = 0 ;
    while(decimal)
    {
        binary[i++] = '0' + (decimal &1);
        decimal >>= 1;
    }
    binary[i] = '\0';
    strrev(binary);
    return binary;
}

// how do i become better at programming things 
// things are not working fine , is it 
// we are putting lots of work but not really 
// we are getting good at shit 



