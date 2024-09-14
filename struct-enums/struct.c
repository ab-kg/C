
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure is a way to group several realted variables into one piece 
// each variable in the structure is called member 


struct myStructure {
        int myNum ;
        char myLetter ;
        char myString[30];
};

int main()
{
    struct myStructure s1 ;
    struct myStructure s2 ;
    struct myStructure s3 = { 13 , 'C' , "Some new text"};

    s1 = s3 ; 

    printf("%d %c %s " , s3.myNum , s3.myLetter , s3.myString);
    // printf("%d %c %s " , s1.myNum , s1.myLetter , s1.myString);

    s3.myNum = 30 ;
    s3.myLetter = 'X';
    strcpy(s3.myString , "Something else");

    
    printf("%d %c %s " , s3.myNum , s3.myLetter , s3.myString);

    // s1.myNum = 13 ;
    // s1.myLetter = 'B';
    // // s1.myString = "SOme text";
    // strcpy(s1.myString , "Some text");

    // printf("My number is %d\n " , s1.myNum);
    // printf("My letter is %c\n" , s1.myLetter);
    // printf("My letter is %s\n" , s1.myString);

    // s2.myNum = 23 ;
    // s2.myLetter = 'A';

    // printf("my number is %d\n" , s2.myNum);
    // printf("my letter is %c\n" , s2.myLetter);

    return 0 ;
}





