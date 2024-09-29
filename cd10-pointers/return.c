#include <stdio.h>
#include <stdlib.h>

int* Add(int *a , int *b)
{   
    int *c  = (int*)malloc(sizeof(int));
    *c = *a + *b;
    return c ;
}

int main()
{
    int x = 2 , y = 4 ;
    int *z = Add(&x , &y); // value in x of main is copied to a of ADD , value in y of main is copied to b of Add  
    printf("%d " , *z);
    printf("%d" , z);
    return 0 ;
}



