#include <stdio.h>

int sumOfElements(int* A  , int size)
{   
    int sum = 0 ;
    // printf("size of A :%d ; size of A[0]: %d\n" , sizeof(A) , sizeof(A[0]) );
    for(int i = 0 ; i< size ; i++)
    {       
        sum  += *(A+ i );
        A[i] = 2**(A+ i);
    }
    return sum ;
}

int main()
{
    int A[]= {1 , 3 , 4 ,6};
    
    int size = sizeof(A)/sizeof(A[0]);
    int sum = sumOfElements(&A[0] , size);
    printf("%d\n" , sum);
    printf("size of A :%d ; size of A[0]: %d\n" , sizeof(A) , sizeof(A[0]) );
    for(int i = 0 ; i< size ; i++)
    {
        printf("%d " , A[i]);
    }
    return 0 ;
}

// int main()
// {
//     int x= 5 ;
//     int* p = &x ;
//     *p = 6 ;
//     int** q = &p ;
//     int*** r = &q;
//     printf("%d\n" , *p);//6
//     printf("%d\n" , *q);//address
//     printf("%d\n" , **q);// 6
//     printf("%d\n" , **r); // address
//     printf("%d\n" , ***r); //  6

//     ***r = 10 ;
//     printf("x = %d\n" , x);

//     **q = *p + 2;
//     //  x= 10 
//     // *p = &x 
//     // **q = &p
//     printf("%d\n" , x);

//     return 0 ;
// }

