#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
       int n ;
       printf("input the number of elements stored in array");
       scanf("%d" , &n);

       int *a = malloc(n*sizeof(int)) ;

       for(int i = 0 ; i< n ; i++)
       {
        printf("elemnet no :%d " , i+1);
        scanf("%d" , (a+i));
       }


       int sum = 0 ;
       for(int i = 0 ; i < n ; i++)
       {
        printf("%d " , *(a + i));
        sum = sum + *(a + i);
       }
       printf("%d" ,sum);


    return 0 ;
}
