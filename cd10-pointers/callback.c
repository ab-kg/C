#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* a , const void* b )
{
    int A = *((int*)a);
    int B = *((int*)b);
    return A-B;
}

int main()
{
    int i , A[]= { -31 , 22 , -1 , 50 , -6 , 4};
    qsort(A , 6 , sizeof(int) ,compare );
    return 0 ;
}

// --------------------------------------------------------------------

// int compare(int a , int b)
// {
//     if(abs(a) < abs(b)) return -1;
//     else return 1 ;
// }

// void BubbleSort(int * A , int n ,int (*compare)(int , int) )
// {   
//     int temp ;
//     for(int i = 0 ; i < n ; i++)
//     {
//         for(int j = 0 ; j < n-1 ; j++)
//         {
//             if(   compare( A[j] , A[j+1] )  > 0 )
//             {
//                 temp = A[j];
//                 A[j] = A[j+ 1];
//                 A[j+1] = temp;
//             }
//         }
//     }
// }

// int compare(const void* a , const void* b)
// {
//     int A = (int*)a;
// }



// int main()
// {
//     int A[]  = { -3 , 2 , -1 , 5 , -6 , 4}; // sort in increasing order 
//     // BubbleSort(A , 6, compare );
//     // for(int i = 0 ; i<6 ; i++) printf("%d " ,A[i]);
//     qsort(A , 6 , sizeof(int) ,  );
//     return 0 ;
// }

// ------------------------------------------------------------------------
 
// void A()
// {
//     printf("Hello");
// }

// void B(void (*ptr)())
// {
//     ptr();// callback function that "ptr" points to 
// }

// int main()
// {
//     void (*p)() = A ;
//     B(p);
//     return 0 ;
// }


