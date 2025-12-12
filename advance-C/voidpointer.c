#include<stdio.h>
#include <stdint.h>
#include <stdio.h>

void *my_memset(void *data , int c , size_t  n)
{
    int *data_as_bytes = (int*)data ;
    for(size_t i = 0 ; i< n ; i++)
    {
        *(data_as_bytes + i  ) = c ;
    }
    return data ;
}

void map(void *xs , size_t n , size_t size , void (*f)(void*))
{
    uint8_t *xs_as_bytes = (uint8_t*)xs;
    for(size_t i = 0 ; i < n ; i++)
    {
        f(&xs_as_bytes[i*size]);
    }
}

void square(void *x)
{
    int *p = x ;
    *p = *p * *p;
}

int main(void)
{   
    int xs[5] = { 1 , 2 , 3 , 4 , 5};
    for(int i = 0 ; i < 5 ; i++)
    {
        printf("%d " , xs[i]);
    }
    printf("\n");
    // my_memset(xs , 24 , sizeof(xs)/sizeof(xs[0]) );
    map(xs , 5 , sizeof(int) , square);
    for(int i = 0 ; i < 5 ; i++)
    {
        printf("%d " , xs[i]);
    }
    return 0 ;
}

// map function we use in javascript here is being written by us C developers 
