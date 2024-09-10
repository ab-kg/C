#include <stdio.h>

int main()
{
    int seen[10] = {0};
    int num = 678627;

    while(num > 0 )
    {
        int rem = num%10;
        if(seen[rem] == 1)
        {
            break ;
        }
        seen[rem] = 1; 
        num = num/10 ;
    }

    if( num > 0)
    {
        printf("Yes");
    }
    else 
        printf("No");

        
}

