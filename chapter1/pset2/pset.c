#include <stdio.h>

static int i  ;
static int i = 27;
static int i ; 
int main(){
    static int i = 23;
    printf("%d" , i);
    return 0 ;
}


//  memory layout of C Program

// stack
// heap
// uninitialised data (bss) => uninitialized global , static , 
// initialised data (data) ==> read only , read write : global extern static 
// text/code segment (text)
