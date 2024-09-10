#include <stdio.h>

// pointer is a special variable that is capable of storing some address .

// it points the memory location where the first byte is stored

// syntax

// data_type *pointer_name

// int *ptr ;
// char *ptr ;
// float *ptr ;


// how to initialize a variable 
// assign address of some variable 


int main(){

    int x = 10 ;
    int *ptr = &x ;
    
    printf("%d " , ptr);
    // reference operator
    printf("%d " , *ptr);
    // dereference operator

    *ptr = 4 ; 
    printf("%d " , x);
    printf("%d " , *ptr);


}

// we can also change the value of the object pointed by pointer 
