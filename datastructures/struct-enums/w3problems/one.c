#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[10];
    int age ;
    int total;
};


int main()
{   
    struct Student s1 , s2 ;
    printf("input your credentials");
    scanf("%s" , &s1.name );
    scanf("%d" , &s1.age );
    scanf("%d" , &s1.total );

    printf("input your credentials");
    scanf("%s" , &s2.name );
    scanf("%d" , &s2.age );
    scanf("%d" , &s2.total );


    int avg1 = (s1.total + s2.total)/2;

    printf("name of the person1 : %s\n" , s1.name);
    printf("age of the person1: %d\n" , s1.age);
    printf("total marks of person1: %d\n" , s1.total);

    printf("name of the person1 : %s\n\n" , s2.name);
    printf("age of the person1: %d\n\n" , s2.age);
    printf("total marks of person1: %d\n\n" , s2.total);
    
    printf("avg marks of two students %d\n\n" , avg1);


    return 0 ;
}