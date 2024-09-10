#include <stdio.h>

int main()
{
    int n ;

    printf("Enter the number of elements you want to reverse: \n");
    scanf("%d" , n);

    int a[n];
    int i ; 
    printf("ENter all the %d elements: \n" ,n);
    for(int i = 0 ; i< n  ; i++)
    {
        scanf("%d" , &a[i]);
    }

    printf("Elements in reverse order are: \n");
    for(int i = n-1 ; i> 0 ; i--)
    {
        printf("%d" , a[i]);
    }
    return 0 ; 
}
