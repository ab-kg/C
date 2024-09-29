#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data ;
    struct Node *link ;
};

void linkedTraversal(struct Node* ptr)
{   
    while(ptr != NULL)
    {
    printf("ELement of : %d\n" , ptr->data);
    ptr = ptr->link;
    }
}

int main()
{   
    struct Node *head = malloc(sizeof(struct Node));
    head->data = 45 ;
    head->link = NULL;


    struct Node *current = malloc(sizeof(struct Node));
    current->data = 96;
    current->link= NULL ;
    head->link = current ;

    struct Node *current2 = malloc(sizeof(struct Node));
    current2->data = 323;
    current2->link = NULL;
    current->link = current2 ;

    struct Node *curr3 = malloc(sizeof(struct Node));
    curr3->data = 23;
    curr3->link = NULL;
    current2->link = curr3;


    linkedTraversal(head);

    return 0;
}




// void add_at_end(struct node *head , int data)
// {
//     struct Node *ptr , *newnode ;
//     ptr = head ;
//     newnode = (struct Node*)malloc(sizeof(struct  Node));

//     newnode->data = data ;
//     newnode->link = NULL ;
    
//     while(ptr->link != NULL)
//     {
//         ptr = ptr->link;
//     }
//     ptr->link = newnode;
// }

// int main()
// {
//     struct Node *head = malloc(sizeof(struct Node));
//     head->data = 45 ;
//     head->link = NULL;

//     struct Node *current = malloc(sizeof(struct Node));
//     current->data = 98 ;
//     current->link = NULL ;
//     head->link = current ;

//     current = malloc(sizeof(struct Node));
//     current->data = 3 ;
//     current->link = NULL ;

//     head->link->link = current ;


//     add_at_end(head , 67);

//     struct Node *curr = head ;
//     while(curr != NULL)
//     {
//         printf("%d\n" , curr->data);
//         curr = curr->link ;
//     }

//     return 0 ;
// }

// typedef struct Node{
//     int x ;
//     struct Node* next ;
// } Node;


// int main(int argc , char* argv[])
// {
//     Node root ;
//     root.x = 15 ;
//     root.next = malloc(sizeof(Node));

//     root.next->x = -2 ;
//     // we are dereferencing through arrow operator 
//     root.next->next = NULL;

//     // printf("First: %d\n" , root.x);
//     // printf("Second: %d\n" , elem2.x);

//     printf("First %d\n" , root.x);
//     printf("Second: %d\n" , root.next->x );

//     free(root.next);
//     // printf("Second %d\n" , (*root.next).x );

//     return 0 ;
// }

// typedef struct Node {
//     int x ;
//     struct Node* next ;
// } Node ;


// int main()
// {
//     Node root  , elem2;

//     Node* newroot = (struct Node*)malloc(sizeof(struct Node));
//     root.x = 12 ;
//     root.next = &elem2;

//     elem2.x = 23;
//     elem2.next = newroot ;

//     newroot->x = 34 ;
//     newroot->next = NULL ;

//     printf("%d\n" , root.x);
//     printf("%d\n" , elem2.x);

//     // free(newroot);

//     return 0 ;
// }