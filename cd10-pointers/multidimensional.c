#include <stdio.h>
#include <stdlib.h>

// int B[2][3]

// 400 404 408   412 416 420
// 2   3   6     4   5   8

// B    => 400
// *B   => 400
// B[0] => 400
// B[i][j] = *(B[i] + j ) = *( *(B + i) + j )  
// int C[3][2][2]


void Func(int (*A)[2][2])
{

}


int main()
{   
    int C[3][2][2] = {  { {2 , 5} , {7 , 9} } , 
                        { {3 , 4} , { 6 , 1}  } ,
                        { {0 , 8} , { 11 , 13}  } };

    printf("%d %d %d %d" , C , *C , C[0] , &C[0][0]);   

    int B[2][3] = { { 2 , 4 , 5 } , { 5 , 6 , 7}};
    Func(B);
    Func(C);

    return 0 ;
}

