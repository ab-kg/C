// linked lists are alteranative to arrays


// Arrays                  Linked Lists 
// int i = 0                Node* curr = &root  => this means root is defined under stack memory
//                          Node* curr = root   => this means root is node pointer pointing towards a memory defined in heap memory
// i < n                    curr != NULL 
// i++                      curr = curr->next 

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int x ;
    struct Node* next;    
}Node ;

// void insert_end(Node* boot , int value)
// {
//     Node* new_node = malloc(sizeof(Node));
//     if(new_node == NULL)
//     {
//         exit(1);
//     }
//     new_node->next = NULL ;
//     new_node->x = value ;

//     Node* curr = boot ;
//     while(curr->next != NULL)
//     {
//         curr = curr->next ;
//     }

//     curr->next = new_node ; 
// }


// int main()
// {
//     Node root  ;
//     root.x = 12 ;
//     root.next = NULL ; 

//     insert_end(&root , 2);

//     Node* curr = &root ;
//     while(curr != NULL)
//     {   
//         printf("%d " , curr->x);
//         curr = curr->next ;
//     }
    
//     free(root.next->next);
//     free(root.next);
//     return 0 ;
// }

void insert_end(Node** root , int value)
{
    Node* new_node = (Node *)malloc(sizeof(Node));
    new_node->x = value ;
    new_node->next = NULL ;

    if(*root == NULL)
    {
        *root = new_node ;
    }

    Node* curr = *root ;
    while(curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next =  new_node;
}


int main()
{   
    Node* root = NULL ;
    // Node* root = (Node*)malloc(sizeof(Node));
    // if(root == NULL)
    // {
    //     exit(2);
    // }
    // root->x = 12 ;
    // root->next = NULL ;

    insert_end(&root , 45);
    insert_end(&root , 23);

    Node* curr = root ;
    while(curr != NULL)
    { 
        printf("%d " , curr->x);
        curr = curr->next ;
    }

    return 0 ;
}
