

#include <stdio.h>


int main(){
    int a = 4 , b = 3; 
    printf("%d" , ++a+b);
    return 0 ;
}


/*
Compilation
1. Lexical Analyser
token => lexemes e.g : int , char , float ===> into tokens 
lexemes => meaningful sequence 

int a = 5 ;
int 
a 
= 
5 
;

a+++b ;
lexemes are :
a 
++
+
b

*/