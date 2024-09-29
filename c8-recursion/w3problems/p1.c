#include <stdio.h>

// 50 49 48 47 46 45 ....... 3 2 1 

int naturalNos(int n)
{
    if( n < 2)
    {
        printf("%d " , 1);
    }else
    {
        printf("%d " , n +  naturalNos(n -1 ) );
    }

    return 0 ;
}

// n(3)
// 3 
   

// 1    2     3

// int naturalNos(int n )
// {   
//     if(n <= 50)
//     {
//         printf("%d " , n);
//         naturalNos(n+1);
//     }
    
// }


int main()
{   
    int n = 1;
    naturalNos(50);
    return 0 ;
}
