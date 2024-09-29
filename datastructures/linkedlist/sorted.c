// IN this program we sort the linked list 

// [2][0]  [7][0]  [9][0]
//      [8][0]

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int x ;
    struct Node *next ;
}Node ;

void insert_beginning(Node** root , int value)
{
    Node* new_node = malloc(sizeof(Node));
    if(new_node == NULL)
    {
        exit(2); 
    }
    new_node->next = *root;
    new_node->x = value ;
    *root = new_node;
}


void insert_after(Node* node , int value)
{
    Node* new_node = malloc(sizeof(Node));
    if(new_node == NULL)
    {
        exit(1);
    }

    new_node->x = value ;
    new_node->next = node->next;
    node->next = new_node;
}

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

void insert_sorted(Node** root , int value)
{
    if(*root == NULL || (**root).x >= value )
    {
        insert_beginning(root , value);
        return ;
    }

    Node* curr = *root ;
    while(curr->next != NULL)
    {
        if(curr->next->x >= value)
        {
            break;
        }
        curr = curr->next;
    }   
    insert_after(curr , value);
}

int main()
{       
    Node* root = NULL ;

    insert_sorted(&root , 5);
    insert_sorted(&root , 4);
    insert_sorted(&root , 2);
    insert_sorted(&root , 7);


    for( Node* curr = root ; curr != NULL ; curr = curr->next)
    {
        printf("%d\n" , curr->x);
    }

    deallocate(&root);
    return 0 ;
}
