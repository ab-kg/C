// how to reverse a series using pointers

#include <stdio.h>
#define N  5

int main()
{
    int a[N] , *p ;
    printf("Enter %d elements in the array: " , N);
    for(p = a ; p <= a + N-1 ; p++)
    {
        scanf("%d " , *p);
    }


    printf("Elements in reverse order:\n");
    for(p = a+N-1 ; p >= a ; p--)
    {
        printf("%d " , *p  );
    }

    return 0 ;

}

// the point of this program here was to introduce to us the point that pointers can be used in for loops
// i can look pointers as variable which i can start using with array 
