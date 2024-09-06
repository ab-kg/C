// size of integer 

// sizeof(int)
// sizeof is a unary operator and not a function

// 2's complement 
// signed range
// maximum = 2^(n-1) -1 
// mininum = -2^(n-1)

// unsigned range 
// 0 to 2^n -1 


/*  
char = 1
int = 4
float = 4
double = 8
*/

#include <stdio.h>
#include <limits.h>

int main(){
    int var1 = INT_MIN ;
    int var2 = INT_MAX ;
    // integer is signed integer by default
    // size of integer is 4 bytes = 32 bits
    // -(2^(n-1)) to 2^n -1 

    unsigned int var1 = 0 ;
    unsigned int var2 = UINT_MAX;

    printf("range of unsigned integer is from: %u to %u " , var1 , var2) ;


    short int var3 = SHRT_MIN;
    short int var4 = SHRT_MAX;

    printf("range of short signed integer is from: %d to %d" , var3 , var4);

    short unsigned int var5 = SHRT_MIN;
    short unsigned int var6 = USHRT_MAX;

    printf("range of short unsigned integer is from : %u to %u" , var5 , var6)
    
    // long int = 4
    // long long int  = 8

    // long int = 8 
    // long long int = 8

    // %d - singed integer
    // %u - unsigned integer

    return 0 ;
}






// modifiers
// 1. short
// 2. long
// 3. long long 

// ===


/*
signed int i 
signed i 
unsigned i 
long i 
long int i 
long long i 
*/

// all these definitions are correct 




// -------------------------------------------
// problem 2

// int main(){
//     unsigned i = 1;
//     int j = -4 ;
//     printf("%u"  , i+ j);
//     return 0 ;
// }

// integer value depends from machine to machine 
// -3 = 2's complement representation 
// 4294967293


