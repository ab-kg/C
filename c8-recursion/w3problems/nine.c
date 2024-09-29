#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// // string
// // gnirts

// void reverse(char str[] ,int start ,int end)
// {
//     if(start > end)
//     {
//         return ;
//     }
//     char temp ;
//     temp = str[end] ;
//     str[end] = str[start] ;
//     str[start] = temp ;

//     reverse(str , start + 1 , end -1);

// }

// int main()
// {
//     char string[40] = "hllo";
//     int n = strlen(string);

//     reverse(string , 0 , n-1);

//     printf("%s" , string);
//     return 0 ;
// }




#define MAX 100
char* reverseString(char[]);

char* reverseString(char str[])
{
    static int i = 0 ;
    static char revstr[MAX];
    if(*str)
    {
        reverseString(str + 1);
        revstr[i++] = *str ;
    }
    return revstr ;
}

int main()
{
    char str[MAX] , *revstr;
    strcpy(str ,  "hello");
    revstr = reverseString(str);
    printf("%s" , revstr);
    return 0 ;   
}
