// Heap
// Stack
// Static/Global
// Code/Text

// Computers only understands binary 

// we are trying to write function pointers
// that is a variable which is pointing to a function
// just as in case of integer pointer which is nothing but a variable which stores the address of any integer 
// and we can dereference the value of that integer by using the address and *A 

// somthing like this will be done to pointers now 

#include <stdio.h>

int Add(int a , int b)
{
    return a + b ;
}

void PrintHello(char *name)
{
    printf("Hello\n %s" , name);
}

// this is how you do the function pointer 
int *(Func)(int , int);

// this is a function which returns a integer pointer
// int * Func(int , int );

int main()
{   
    // pointer to function that should take
    // (int , int as argument / parameter and return int)
    // int (*p)(int  , int );
    // // p = &Add ;
    // p = Add ;
    // int c ; 
    // c = p(2 , 3);
    
    // printf("%d" , c); 
    // int (*ptr)(int , int );// pointer which is pointing towards the function 
    // ptr = &Add ; // here we store the address of function in our ptr variable
    // int c ; 
    // c = ptr( 3 , 4);   // here we call the function using the function pointer and this is the syntax of doing that thing
    // printf("%d", c);

    void (*p)(char*);
    p = PrintHello;
    p("Tom");
    return 0 ;
}

// focus on the concept 
