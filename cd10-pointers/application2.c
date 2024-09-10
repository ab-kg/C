#include <stdio.h>

// finding the middle element of array using pointer

// idk how the pointer of function works yet 
int *findMid(int a[] , int n)
{
    return &a[n/2];
}

int *fun()
{
    int i = 10 ;
    return &i ;
}
// here we are trying to return the address of local variable i 
// but the issue is after executing fn fun the variable i will be destroyed 

// so the pointer p is pointing towards the variable which is towards i . 
int main()
{
    int *p = fun();
    printf("%d" , *p);

    return 0 ;
}




// int main()
// {
//     int a[]= { 1 , 2 , 3 , 4 , 5};
//     int n = sizeof(a)/sizeof(a[0]);
//     int *mid = findMid(a , n);
//     printf("%d " , *mid);
//     printf("%d " , mid);
//     return 0 ;    
// };


// automatic variable = local variable
// never try to return the address of an automatic variable

/*
int *fun()
{
    int i = 10 ;

}


*/