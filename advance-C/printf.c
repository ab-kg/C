#include <stdio.h>

// printf is the most complex function that exists 
// Coding things in C is very hard as far as the things are considered 



int main(void)
{
    printf("---%05d---\n" , 32);
    // printf("%u\n", 32);
    // printf("%f\n" , 42.42);
    int a =1 ;
    int *b = &a ;
    // printf("%p\n" , &a);
    // printf("%p\n" , b);

    // printf("%s\n", "hello");

    // printf("%%\n");
    // printf("%e\n" , 123232.322323);
    
    // g based on the number it changes the output , if large no is given it converts it into scientific notations and for smaller no it gives it as floating point number
    // printf("%g\n" , 1.12);


    FILE *f = fopen("foo.txt" , "w");
    fprintf(f , "%d , %d\n" , 3 , 2);
    fclose(f);

    return 0 ;
}


