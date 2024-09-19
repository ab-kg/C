// Write a program in C to create and display a Singly Linked List.

#include <stdio.h>
#include <stdlib.h>


struct node {
    int num ;
    struct node *nextptr ;
} *stnode ;

// *stnode at the end is the starting node , and it is pointed towards the first node or it can be used to point towards any node .

void createNodeList(int n);
void displayList();


int main()
{
    int n ;

    printf("input the number of nodes");
    scanf("%d" , &n);

    createNodeList(n);

    printf("\n Data enter in teh list : ]n")

    displayList();

    return 0 ;
}

void createNodeList(int n )
{
    struct node *fnNode , *tmp ;
    
    int num , i ;

    stnode = ( )


}


