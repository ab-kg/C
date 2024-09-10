#include <stdio.h>

// Calculate the sum of the elements of array using pointers



int main()
{
    int a[] = {11 , 22 , 36, 5 , 2};
    int sum = 0 , *p ;


    // we can use pointers of operational reasons
    // we can compare things if we can assign values to pointers as we do with variables

    // for(int i = 0 ; i <= 4 ; i++)
    // {
    //     sum += sum + a[i];
    // }

    for(  p = &a[0] ; p <= &a[4] ; p++    )
    {
        sum += *p ;
    }

    printf("Sum is %d" , sum);
    return 0 ;
}





