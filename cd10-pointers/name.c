

#include <stdio.h>

int main()
{
    int a[5];
    *a = 10 ;
    printf("%d " , a[0]);
    printf("%d " , *a);
    // printf("%d " , *(++a));
    printf("%d " , a);
    return 0 ;    
}
