// Dangling Pointer
// points to some non-existing memory location
#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     int *ptr = (int *)malloc(sizeof(int));

//     printf("%d\n" , ptr);
//     free(ptr);
//     printf("%d\n", ptr);
//     ptr = NULL ;
//     printf("%d\n" , ptr);
//     return 0 ;
// }


// after realeasing the memory using free , memory is realeased but yet
// the pointer is still pointing towards the same old memory location
// which does not exist as of now
#include <stdio.h>
#include <stdlib.h>


int* fun()
{
    int num = 10 ;
    return &num ;
}

int main()
{
    int *ptr = NULL;
    ptr = fun();
    printf("%d\n" , *ptr);
    printf("%d" , ptr);
    return 0 ;
}
