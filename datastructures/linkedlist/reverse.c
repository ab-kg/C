//   [1][]   [3][]    [6][]
//    prev    crrr     next 
// how to reverse linkedlist
// iterating through linked list and change the pointer back 

// three variables to reverse the thing 

// prev 
// curr 
// next 

#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int x ;
    struct Node* next ;
}Node;


insert_end(Node * root , int value)
{
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->x = value;
    new_node->next = NULL ;
}

int main()
{
    Node* root = malloc(sizeof(Node));
    if(root == NULL)
    {
        exit(2);
    }
    root->x = 15;
    root->next = NULL;

    insert_end(root , -2);
    return 0 ;
}