
#include <stdio.h>

extern int a = 9 ;
// extern int a;
// extern int a ;
// extern int a ;
// multiple declarations are allowed 

// defined variable 
// declared variable

// int a = 9 ;
int main(){
    
    printf("%d" , a );
    return 0 ;
}

// 1.preprocessing
// 2.compiling
// 3.assembler
// 4.linker => links extern variable 