#include<stdio.h>

void Func(int A[][2][2])
{

}



int main()
{
    int C[3][2][2] = {{ { 2 ,5}  , { 7 ,9 }},{ { 3 , 4 },{ 6 , 1}  }  ,{ { 0 , 8} ,{ 11 , 13 } }};
    int A[] = { 1 , 2};
    int B[2][3] = { {2 , 4 , 6},{ 5 , 7 , 8}  };
    // Func(B);
    int X[2][4];
    // Func(X);
    // here x will is pointing to one dimensional array of 4 elements 
    // hence when we are passing X into Func ,in the function definition 

    Func(C);
    // if we are passing C into the function then in the function declaration 
    // Func(int C[][2][2])
    // C is pointing towards an array of two dimension 
 
    return 0 ;
}
