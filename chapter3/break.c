


#include <stdio.h>

int main()
{   int n ;
    printf("write give me integers");
    scanf("%d" , &n);

    while(n != 0)
    {
        if(n <0 )
            break;
        printf("%d" , n);
        printf("Enter a number\n");
        scanf("%d" , &n);
    }

    return 0 ;
}


