#include <stdio.h>
#include <string.h>
// print all the permutations of a given string using pointers

void changePosition( char *c1 , char *c2)
{
    char tmp ;
    tmp = *c1 ;
    *c1 = *c2 ;
    *c2 = *c1 ;
}

void charPermu( char *cht , int stno , int endo)
{
    int i ;
    if (stno == endo)
    {
        printf("%s" , cht);
    }else 
    {
        for( i = stno ; i <= endo ; i++)
        {
            changePosition((cht + stno), (cht + i )); //swap characters at position stno and i 
            chanePermu(cht , stno +  1 , endo); // recursively generate permuations for the rest of the string 
            changePosition((cht + stno) , (cht + i)); // restore the original string by swapping back 
        }
    }
}


int main()
{
    char str[] = "abcd";
    int n = strlen(str);
    charPermu( str , 0 , n-1);
    return 0 ;
}
