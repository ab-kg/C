
#include <stdio.h>

// int main()
// {
//     int a[] = { 1 , 2 , 3 , 4};
//     int b[] = { 10 , 20 , 30 , 40 };
//     int *p = &a[0];
//     int *q = &b[3];
//     printf("%d" , q - p);
//     return 0 ;    
// }


// undefined behaviour as we trying to subtract two pointers which point towards two different 
// pointers



// --------------
// Post Increment

// int main()
// {
//     int a[] = { 1 , 10 , 3 , 4 ,5};
//     int *p = &a[0];
//     printf("%d\n" , *p );
//     printf("%d\n" , *(p++));
//     printf("%d", *p );
//     return 0 ;
// }

// -------------------
// Pre Increment 

// int main()
// {
//     int a[] = { 1 , 10 , 3 , 4 ,5};
//     int *p = &a[0];
//     printf("%d\n" , *p);
//     printf("%d " , *(++p));
//     printf("%d" , *p);

//     return 0 ;

// }

// increment of (++p ) this means we are pointing to the next element in the arry 
// and when we are adding the size by multiplying by 4 bcos each element of int takes 4 bits 


// ----------
// Pre and Post Decrement 

int main()
{
    int a[] = { 1 , 10 , 3 , 4 ,5};
    int *p = &a[2];
    printf("%d\n" , *p);
    // printf("%d\n" , *(--p));
    printf("%d\n" , *(p--));
    printf("%d\n" , *p);   
    return 0 ;

}

