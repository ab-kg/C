// passing array of structures as argument
#include <stdio.h>

struct abc {
    int a;
    char b ;
};

void print(struct abc arr[])
{
    int i ;
    for(int i= 0 ; i< 2 ; i++)
    {
        printf("%d %c\n" , arr[i].a , arr[i].b);
    }
}

int main()
{
    struct abc arr[] = { {1 ,'A' } , { 2 , 'B'}  };
    print(arr);
    return 0 ;
}


// keep cooking

