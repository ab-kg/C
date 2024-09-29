// how to reverse a string using recursion 
// string
// gnirts 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char stringg(char string[] , int start , int end)
{   
    // for loop is banned when you are doing recursive functions
    if(start >= end)
    {
        return ;
    }
    // swap characters at start and end position
    char temp = string[start];
    string[start] = string[end];
    string[start] = temp ;

    // recursive call to reverse the remaining string characters
    reverseString(string , start+1 , end -1);
}   

int main()
{
    char string[10] = "hello";
    int len = strlen(string);
    stringg(string , 0  , len-1);
    printf("Reversed string: %s\n" , string);
    return 0 ;
}


// time complexity 
// O(n)
// it should technically be O(n/2) , but in the worst case scenario it is considered to be O(n)
