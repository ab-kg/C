#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[10] ;
    int age ;
    int totalMarks;
};

int main()
{
    struct Student  s1;
    struct Student  s2;
    
    s1.totalMarks = 10;
    s2.totalMarks = 10 ;

    printf("%d \n" , &s1.totalMarks);
    printf("%d \n" , &s2.totalMarks);
    
    return 0 ;
};




