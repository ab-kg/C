#include <stdio.h>
#include <math.h>

int main()
{
    int choice ; 
    float radius , length , width , base , area ;

    do{

        printf("\n--- Area Calculation Menu ---\n");
        printf("1. Circle\n");
        printf("2. Square\n");
        printf("3. Rectangle\n");
        printf("4. exit choice ");
        scanf("%d" , &choice);

        switch(choice)
        {
            case 1:
                printf("ENter the radius of the circle");
                scanf("%f" , &radius);
                area = 3.128 * radius * radius;
                printf("The area of the circle is: %.2f\n" , area);
                break;

            case 3:
                printf("Enter the length and width of the rectangle");
                scanf("%f %f" , &length , &width);
                area = length*width;
                printf("the area of the rectangele is : %.2f\n" , area);
                break;

            case 2:
                printf("Enter the side of the square: ");
                scanf("%f" , &base );
                area = base*base;
                printf("The area of the square is: %.2f\n" , area);
                break;
            
            case 4:
                printf("Exiting the program\n");
                break;
            
            default:
                printf("INvalid choice! Please enter a number btn 1 and 4.\n");
        }
    }while(choice != 4);
    
}

