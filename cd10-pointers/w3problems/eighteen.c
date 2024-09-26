#include <stdio.h>
#include <stdlib.h>

// Use of pointers to structures 

struct EmpAddress {
    char *ename ;
    char stname[20];
    int pincode ;
};

struct EmpAddress employee = { "John Alter " , "Court Street \n" ,654134  } ;
struct EmpAddress *pt = &employee;

int main()
{
    printf("%s from %s \n\n" , (*pt).ename , (*pt).stname ) ;
    return 0 ;
}





