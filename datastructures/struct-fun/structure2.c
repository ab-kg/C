// 2. Passing structure variable as argument

// it makes no sense to pass members of strcutre when you can pass structure variable itself

#include <stdio.h>

struct point {
    int x ;
    int y ;
};

void print( struct point p)
{
    printf("%d %d" , p.x , p.y);
}

int main()
{
    struct point p1 = { 12 , 13};
    struct point p2 = { 14 , 15 };

    print(p1);
    print(p2);
    return 0 ;
}

