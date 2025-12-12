#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef int (*t_my_fun)(int ,int );

int foo(int x , int y )
{
    return x + y ;
}

bool predicate(int x )
{
    if(x %2 ==0)
    {
        return true;
    }else return false ;
}

int compar(const void *x1 , const void *x2)
{
    return  (*(int*)x1) -  (*(int*)x2 );
}

void print_if(int xs[10] , bool (predicate)(int))
{
    for(int i = 0 ; i< 10 ; i++)
    {
        if(predicate(xs[i]))
        {
            printf("%d" , xs[i]);
        }
    }
}

int main()
{
    int xs[] = { 3 , 2 , 1 , 4 , 6,5 , 7 , 8 , 9 , 10};
    for(int i = 0 ; i< 10 ; i++)
        printf("%d\n" , xs[i]);
    printf("---------------------------------------\n");
    qsort(xs , 10 , sizeof(int) , compar);
    for(int i = 0 ; i< 10 ; i++)
        printf("%d\n" , xs[i]);

// function pointer , you can point to a function and call that fucntion using the pointer variable as below . 
    t_my_fun f = foo ;
    // printf("%d\n" , f(3 , 4));
    // print_if(xs , predicate);

    return 0 ;
}

