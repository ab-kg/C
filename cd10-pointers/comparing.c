// comparing pointers

// only possible when they are pointing to same pointer
// using realtional operators <>  and == !=

#include <stdio.h>

int main()
{
    int a[]= { 1 , 2 , 3 , 4 , 5 , 6 };
    int *p = &a[3];
    int *q = &a[5];

    printf("%d " , *(p + 1));
    printf("%d " , *(q - 3));

    return 0 ;
}
