#include <stdio.h>
#include <stdlib.h>

// find the  largest element using dynmaic memory allocation

// dynmaic memory allocation is used to allocate memory and at run time , we got four fucntions malloc , calloc , free and somehting else 
// i have no idea how this memory allocation can be used to find largest no 
// pointer can be helpful to find largest element 


// we can use dynmaic memory allocation because it not only allocates memory but also returns the address of the first element in the memory space
// we can use a pointer to strore that in address

int main()
{   
    int i , n ; 
    float *element ;


    printf("how many numbers you want ot enter\n ");
    scanf("%d" , &n);

    element = (float *)calloc( n ,sizeof(float));

    // memory is allocated just like array memory is allocated in serial order

    for(i = 0 ; i< n ; i++)
    {
        printf("enter element %d\n" , i+1);
        scanf("%f"  , element + i);
    }

    for(int i = 0 ; i<n ; i++)
    {
        printf("element no %d : %.2f  \n" , i+1 , *(element + i) );
    }

    return 0 ;
}


