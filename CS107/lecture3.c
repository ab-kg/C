#include <stdio.h>
#include <string.h>

void swap(void * , void* , int);

int main()
{   
    int x = 17 ,y = 34 ;
    swap(&x , &y , sizeof(int));

    float m = 23.00 , n = 234.44;
    swap(&m , &n ,sizeof(int));

    int i = 4323;
    short s = 5233 ;
    swap(&i , &s , sizeof(int));
    printf("%d " , i);
    printf("%hd " , s); 

    return 0 ;
}

// generic byte rotator 
// this can be used to swap integers , floats characters or any data type as we are using void pointers in the function 
void swap(void *vp1 , void *vp2 , int size)
{
    char buffer[size];
    memcpy(buffer , vp1 , size);
    memcpy(vp1 , vp2 , size);
    memcpy(vp2 , buffer , size);
}
