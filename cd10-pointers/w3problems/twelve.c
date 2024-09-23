#include <stdio.h>

// finding factorial using pointers

// think how would you have found the value without using pointers
// and now you can replace the variable as pointer is just variable and additionally you can also access the address and the element



void findFact(int , int*);

int main()
{
    int fact ;
    int num ;

    printf("enter the number to find factorial of that number");
    scanf("%d" , &num);

    findFact(num , &fact);

    printf("factorial of the number %d is : %d" , num , fact);

    return 0 ;
}


void findFact( int n , int *fact)
{
    *fact = 1; 

    for(int i = 0 ; i< n ; i++)
    {
        *fact = *fact * (i+1) ;
    }

}
