// IN this program we are adding an element in a linked list

// [2][]  [4][] [5][]

// adding this after first node 
// [7][]

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int x ;
    struct Node *next ;
}Node ;

void insert_after(Node* node , int value)
{
    Node* new_node = malloc(sizeof(Node));
    if(new_node == NULL)
    {
        exit(1) ;
    }
    new_node->x = value ;
    new_node->next = node->next;
    node->next = new_node;
}

void insert_end(Node** root  ,int value)
{
    Node* new_node = malloc(sizeof(Node));
    if(new_node == NULL)
    {
        exit(1);
    }
    new_node->next = NULL;
    new_node->x = value;

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


int main()
{
    Node* root = NULL;

    insert_end(&root , 2 );
    insert_end(&root , 4);
    insert_end(&root , 5);

    insert_after(root , 7);
    insert_after(root->next->next->next , 8);


    for(Node* curr = root ; curr != NULL ; curr = curr->next)
    {
        printf("%d\n" , curr->x);
    }

    return 0 ;  
}


