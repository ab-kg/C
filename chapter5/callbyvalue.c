

#include <stdio.h>

int fun(int *x , int *y);

int main(){
    int x = 10 , y = 30 ;

    fun(&x , &y);
    printf("%d" , x);

    return 0;
}

// this is call by value which means we are not actually changing the values of x and y 
// we are creating two new spaces where we keep the values of actual x and y and make changes int the new space

int fun( int *x , int *y ){
    *x = 20 ;
    *y = 30 ;
    return 0 ;
}

// pointers are those variables which can store the address to the variables


