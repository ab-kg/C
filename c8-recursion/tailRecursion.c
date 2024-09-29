// Tail Recursive
// here , recursive call is the last thing done by the function .


// #include <stdio.h>

// // Tail Recursive function as it recursive call is done at the end;
// void fun(int n )
// {
//     if(n == 0)
//     {
//         return ;
//     }else{
//         printf("%d" , n);
//     }
//     return fun(n-1);
// }

// int main()
// {
//     fun(3);
//     return 0;
// }



// Non-TailRecursive
// recursive call is not the last  thing done by the fn 
// after returning something is left to evaluate 

// void fun(int n)
// {
//     if( n== 0)
//     {
//         return ;
//     }
//     fun(n -1 );
//     printf("%d" , n);
// }

// int main()
// {
//     fun(3);
//     return 0 ;
// }

#include <stdio.h>
#include <stdlib.h>


int fun(int n)
{
    if(n == 1)
    {
        return 0 ;
    }else {
        return 1 + fun(n/2);
    }
}

int main()
{
    printf("%d" , fun(8));
    return 0 ;
}

