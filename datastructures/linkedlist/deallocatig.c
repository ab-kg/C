// Deallocating a linked list 
#include <stdio.h>
#include <stdlib.h>
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

typedef struct Node {
    int x ;
    struct Node* next ;
}Node ;

// void insert_end(Node** root , int value)
// {    
//     Node* new_node = malloc(sizeof(Node));
//     if(new_node = NULL)
//     {
//         exit(1);
//     }
//     new_node->next = NULL;
//     new_node->x = value ;

//     if(*root == NULL)
//     {
//         *root = new_node;
//         return ;
//     }

//     Node* curr = *root ;
//     while(curr->next != NULL)
//     {
//         curr = curr->next;
//     }
//     curr->next = new_node ;    
// }

void insert_end(Node** root , int value)
{
    Node* new_node = malloc(sizeof(Node));
    if(new_node = NULL)
    {
        exit(1);
    }
    new_node->next = NULL;
    new_node->x = value ;

    if(*root == NULL)
    {
        *root = new_node;
        return ;
    }

    Node* curr = *root ;
    while(curr->next != NULL)
    {
        curr = curr->next ;
    }
    curr->next = new_node;
}

void insert_beginning(Node** root , int value)
{
    Node* new_node = malloc(sizeof(Node));
    if(new_node = NULL)
    {
        exit(2); 
    }
    new_node->next = *root;
    new_node->x = value ;

    *root = new_node;
   
}

// this function should free all the node memory
void deallocate(Node** root)
{
    Node* curr = *root ;
    while(curr != NULL)
    {   
        Node* aux = curr ; 
        curr = curr->next ;
        free(aux);
    }

    *root = NULL;
}

int main()
{
    // Node* root = malloc(sizeof(Node));
    // if(root == NULL)
    // {
    //     exit(2);
    // }
    // root->x = 15 ;
    // root->next = NULL;

    Node* root = NULL;
    insert_beginning(&root , 13);

    // insert_end(&root , -2);
    // insert_end(&root ,  11);
    // insert_end(&root ,  22);

    for(Node* curr = root ; curr != NULL ; curr = curr->next)
    {
        printf("%d\n" , curr->x);
    }

    // Node* curr = root ;
    // while( curr != NULL)
    // {
    //     printf("%d\n" , curr->x);
    //     curr = curr->next;
    // }

    deallocate(&root);
    _CrtDumpMemoryLeaks();
    return 0 ;
}