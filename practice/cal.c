#include <stdio.h>  // Include the standard input/output header file.

int main()
{
    int action , num1 , num2;
    printf("Two nos and what you want to do with these nos");
    scanf("%d %d %d" , &num1 , &num2 , &action );

    if(action == 1)
    {
        printf("%d" , (num1+ num2) );
    }else if(action == 2 )
    {
        printf("%d" , (num1 - num2) );
    }else if(action == 3)
    {
        printf("%d" , (num1*num2) );
    }else{
        printf("%d" , (num1/num2) );
    };

    return 0 ;
} 


