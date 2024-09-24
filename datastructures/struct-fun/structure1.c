// 1. Passing structure members as argument

// just like variables

#include <stdio.h>

// struct student {
//     char name[50];
//     int age;
//     int roll_no ;
//     float marks ;
// };

// void print(char name[] , int age , int roll , float marks)
// {
//     printf("%s %d %d %.2f" , name, age , roll , marks);
// }



// int main()
// {
//     struct student s1 = {"Nick" , 16 , 50 , 72.5};
//     print(s1.name , s1.age , s1.roll_no ,s1.marks);
// }


//--------------
// Example 2

struct charset {
    char c ;
    int i ;
};

void keyvalue(char* c , int* i)
{
    scanf("%c %d" , c , i);
}

int main()
{
    int i ;
    struct charset cs ;
    keyvalue(&cs.c , &cs.i);    
    printf("char and its ASCII value are: %c and %d", cs.c , cs.i);
    return 0 ;
}

