#include <stdio.h>

int main()
{
    int name[10][10];
    int a[10][3][4];

    int b[2][3] = { { 1 , 2 , 3} ,{4 , 5 , 6} };

    for(int i = 0 ; i < 2 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            printf("%d" , a[i][j] );
        }
    }
    
    // size of pmultidimensional array = 10 * 10 * 4 
    // 10 * 3 * 4 = 120 
}