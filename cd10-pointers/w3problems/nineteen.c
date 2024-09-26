#include <stdio.h>
#include <stdlib.h>

// C Program to find the size of the union
#include <stdio.h>

// declaring multiple unions
union test1 {
    int x;
    int y;
} Test1;

union test2 {
    int x;
    int y;
} Test2;

union test3 {
    int arr[10];
    char y;
} Test3;

// driver code
int main()
{
    // finding size using sizeof() operator

    Test2.x = 100000 ;
    Test2.y = 80 ;
    printf("%d\n\n" , Test2.x);
    printf("%d\n\n" , Test2.y);

    int size1 = sizeof(Test1);
    int size2 = sizeof(Test2);
    int size3 = sizeof(Test3);

    printf("Sizeof test1: %d\n", size1);
    printf("Sizeof test2: %d\n", size2);
    printf("Sizeof test3: %d", size3);
    return 0;
}
