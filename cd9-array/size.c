
#include <stdio.h>

int main()
{
    int a[] = { 1 , 2 , 3 , 4 ,5 , 6, 7 , 8 , 9, 10};
    
    int size = sizeof(a)/sizeof(a[0]);

    //size of 1 array element * number of elements = size of whole array ; 
    printf("%d" , size);
    return size ;
}


