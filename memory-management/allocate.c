#include <stdio.h>
#include <stdlib.h>

// here we have problem as we have allocated extra memory 
// in the students example as we assumed 20 people wud attend 
// but only 12 people are attending 


int main()
{
    // int students[20];
    // printf("%lu" , sizeof(students));

    int *students ; 
    int numStudents = 12 ; 

    students = calloc(numStudents , sizeof(*students));

    printf("%d" , numStudents * sizeof(*students));
    return 0 ;
}


// --------------------------------
// Stack Memory


// Variables declared inside a function use stack memory rather 
// than static memory 
// When a function is called , stack memory is allocated for the variables in  the function
// when the function returns stack memory is freed 

// Stack overflow can happen when there is infinte recursion loop
// where many functions are invoked without freeeing 

