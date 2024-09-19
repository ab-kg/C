#include <stdio.h>



// struct Point {
//     int x , y ;

// };


// int main()
// {
//     struct Point str = { 1, 2  };

//     // p2 is a pointer to structure p1
//     struct Point* ptr = &str;

//     // here we are defining pointer to structure which can store its valules and its addresss


//     // accessing structure members using structure pointer 
//     printf("%d %d", ptr->x , ptr->y);

//     return 0 ;
// }

// --------------------------------------------------------------------------
// Self-Referential Structures

// struct structure_name {
//     data_type member1 ;
//     data_type member2 ;
//     struct structure_name* str ;
// }

// selef-referential structures in C are those structures that contain references to the same type as themselves 
// they contain a member of the type pointer pointing to the same strutcture type 


// here we can use typedef and we can name the structure with the somename 
// next time we dont need to say struct str everywhere we can directly say str as in the case mentioned below 

typedef struct str  {

    int mem1 ;
    int mem2 ;
    struct str* next ;
}str ;

int main()
{
    str var1 = { 1, 2 , NULL};
    str var2 = { 10 , 20 , NULL};

    // assigning the address of var2 to var1.next 
    var1.next = &var2 ;

    // pointer to var1 
    str *ptr1 = &var1 ;

    // printf("var2.mem1: %d \n var2.mem2 : %d" , var2.mem1 , var2.mem2);

    printf("var2.mem1 : %d \n var2.mem2 : %d \n" , ptr1->next->mem1 , ptr1->next->mem2);

    return 0 ;  
}

















