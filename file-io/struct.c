#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int test ;
    char k ;
    char str[10];
    int* p ;
    short sh ;
} Thing ;

void bubble();

int main()
{   
    // int i ;
    // Thing t = { 12 , 'k' , "testing" , &i ,256};
    // printf("%llu\n", sizeof(t));
    // for(i = 0 ; i< sizeof(t) ; i++)
    // {   
    //     if( i % 4 == 0)
    //     {
    //         printf("\n");
    //     }
    //     unsigned char data = *(((unsigned char*)&t) + i);
    //     printf("%c " , data );
    // }
    bubble();
    return 0 ;
}

void bubble()
{
    int i ; 
    Thing t = {23 , 'l',"resting" , &i , 234};
    printf("%llu" , sizeof(t));
    for(i = 0 ; i < sizeof(t) ; i++)
    {
        printf("%02x" , *(((char*)&t) + i)) ;
    }
}