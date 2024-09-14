// char a[100][100]

// main memory is byte addressable => assumption

// 400 *40 = 1600 + 50*4 = 1620

#include <stdio.h>


// pointer pointing to entire array
int main()
{
    int a[5] = { 1 , 2 , 3 , 4  , 5};
    int (*p)[5] = &a ;
    // here p is the pointe which is pointing to entire array a 
    // &a &percent symbol gives the address of whole array
    
    
    


    return 0 ;
}
