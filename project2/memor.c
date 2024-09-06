// register memory
// cache memor
// main  memory
// magnetic disks
// magnetic tapes 


#include <stdio.h>
#include <stdlib.h>


extern int count ;

int main(){
    // register 
    int value ;
    value = increment();
    value = increment();
    value = increment();

    printf("%d" , value);
    return 0 ;
}

// compiler has the choice of putting that variable into register 
// not sure if it puts in the register or not 
