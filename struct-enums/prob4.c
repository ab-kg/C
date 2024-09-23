#include <stdio.h>


struct Circle {
    double radius;
};

double calculateArea(struct Circle C)
{
    return 3.14159 * C.radius * C.radius;
}

double calculatePerimeter( struct Circle C)
{
    return 2* 3.14159 * C.radius;
}


int main()
{   
    struct Circle c1 , c2;

    printf("Input details for circle 1:\n");
    printf("Radius: ");
    scanf("%lf" , &c1.radius);

    printf("\n Input details for circle 2:\n");
    printf("Radius");
    scanf("%lf" , &c2.radius);

    printf("\nCircle 1:\n");
    printf("Area: %.2lf\n", calculateArea(c1));
    printf("Perimeter: %.2lf\n", calculatePerimeter(c1));

    // Calculate and display the area and perimeter for Circle 2
    printf("\nCircle 2:\n");
    printf("Area: %.2lf\n", calculateArea(c2));
    printf("Perimeter: %.2lf\n", calculatePerimeter(c2));

    return 0 ;
}



