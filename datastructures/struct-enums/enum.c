#include <stdio.h>


// enum is a special type that represents a group of constants 

enum Level {
    LOW  ,
    MEDIUM ,
    HIGH
};

// enum => enumerations => Specifically listed 


int main()
{

    enum Level myVar = MEDIUM ;

    switch (myVar)
    {
        case 1:
            printf("Low Level");
            break;
        case 2:
            printf("Medium Level");
            break;
        case 3:
            printf("High level");
            break;
    }

    return 0 ;
}

// enums are used to give names to constants , which makes the code easier to read and maintain .

