// BITWISE OPERATORS

#include <stdio.h>

int main(){
    char x = 1 , y = 2;
    // bitwise and operation
    if(x & y){
        printf("Result of x&y is 1");
    }
   // and gate 
    if(x&&y){
        printf("result of x&&y is 1");
    }
    return 0 ;
}


//LEFT SHIFT OPERATOR

// first operand << second operand

// var = 3
// 0000 0011 = 3
// 0000 0110 => 6 


/*
var = 3 ;
var << 1               output : 6[ 3* 2^1]
var << 4               output : 48[3* 2^4]
*/


// RIGHT SHIFT OPERATOR 

