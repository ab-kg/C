#include <stdio.h>
#include <stdlib.h>

struct employee {
    char *empname;  // Employee name (string pointer)
    int empid;      // Employee ID (integer)
};



int main()
{
    static struct employee emp1 = { "JOhn" ,1001} , emp2 = {"Alex" , 1002}  , emp3 = {"Taylor" , 1003};

    // Creating an array of pointers to struct employee
    struct employee (*arr[]) = {&emp1 , &emp2 , &emp3};

    // creating a pointer to an array of pointers to struct  employee
    struct employee (*(*pt)[3]) = &arr ;

    // printing employee name using pointer to an array of pointers to structures
    printf("Employee name: %s \n"  , (**(*pt + 1)).empname );

    /*
    pt = &arr 
    **(*&arr + 1)
    **(arr+ 1)
    *arr[1]
    *&emp2
    emp2
    */

   printf("Employee ID: %d\n" , (*(*pt + 1))->empid  );
   
   /*
   (*(*pt + 1))
   (*(*&arr + 1))
   (*(arr + 1))
   (arr[1])
   &emp2
   */
    return 0 ;
}

