// Passing pointers to structures as an argument 

// If there is a structure with high size , then passing structure as an argument
// is inefficient , so we pass pointer which is pointing to structure

// to pass the address of strucutre


// -> operator is used to access structure members
// why are we using this ?
// in the last program , we passed structure to the fn 
// then we used . operator to access members of that structure

// but now we are passing pointer to fn which is pointing to structure 
// now we using -> operator to access the members of structure

#include <stdio.h>

struct point {
    int x ;
    int y ;
};

// now if the pointer is pointing towards a structure
// then we are using -> to access the members of that structure
void print(struct point *ptr)
{
    printf("%d %d\n" , ptr->x , ptr->y);
    printf("%d %d" , (*ptr).x  , (*ptr).y );
}

int main()
{
    struct point p1 = { 12 , 23};
    struct point p2 = { 56 , 90 };
    // here we are passing address of structure
    print(&p1);
    // print(&p2);
    return 0 ;
}
