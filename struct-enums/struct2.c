#include <stdio.h>

// declaring structure with name str1 
struct str1 {
    int i ;
    char c ;
    float f ;
    char s[30];
};

// declaring structure with name str2
struct str2 {
    int ii ;
    char cc ;
    float ff ;
} var ;

// defining struct 

typedef struct {
    int a ;
} str1 ;

// another way of using typedef with structures 
typedef struct {
    int x ;
} str2 ;


int main()
{

    str1 var1 = { 20 };
    str2 var2 = { 314 };

    printf("var1.a = %d\n" , var1.a);
    printf("var2.x = %d\n" , var2.x);

    return 0 ;
}






// int main()
// {
//     struct str1 var1 = { 1 ,'A' , 1.00 , "GeeksforGeeks"} , var2 ;
//     struct str2 var3 = { 5 , 'z' , 5.00 } ;

//     var2 = var1 ;

//     // printf("Struct 1 : \n\t i = %d  , c = %c , f = %f , s = %s \n"  , var1.i , var1.c , var1.f , var1.s  );
//     // printf("Struct 2:\n\t i = %d , c = %c , f = %f , s = %s  \n", var2.i, var2.c, var2.f, var2.s );
//     printf("Struct 3 \n\t i = %d , c = %c , f = %f \n" , var3.ii , var3.cc , var3.ff);

//     return 0 ;
// }
