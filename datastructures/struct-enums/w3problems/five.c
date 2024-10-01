#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Car{
    int id ;
    char model[20];
    int rent ;
} Car ;


int main()
{
    Car c1 , c2 ,c3 ;
    c1.id = 24 ;
    c1.model = "hello";
    c1.rent = 40 ;

    c2.id = 12 ;
    c2.model = "gello";
    c2.rent = 39 ;

    c3.id = 13 ;
    c3.model = "mello";
    c3.rent = 899;
    
    return 0 ;
}