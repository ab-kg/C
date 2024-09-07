#include <stdio.h>

// why scoping ?

int fun1(){

    int a = 10;
}

int fun2(){

    int a = 20 ;
}


// lexical scoping

// static scoping 

// whatever variable which is near the scope is the variable \

int a = 10 , b = 10 ;
int fun(){
    int a = 4 ;
    {
        int c ;
        c = b/a;
        printf("%d" , c);
    }
}
