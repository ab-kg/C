#include<stdio.h>



int main()
{   
    int B[2][3] = {{4 , 5 , 6} , { 1 , 2 , 3}};
    int (*p)[3] = B;

    int x = B[0][2];
    printf("%d " , x);
    int y = *(B[0]+ 2);
    printf("%d "  , y);
    int z = *(*(B + 0) + 2);
    printf("%d" , z);

    // printf("%d " , B);
    // // B here is returing to us one dimensional array of size  3
    // printf("%d " , &B[0]);
    // printf("%d " , *B);
    // printf("%d " ,B[0]);

    return 0 ;
}

