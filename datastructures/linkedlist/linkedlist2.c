// In this program we are trying to iterate over a linked list in C

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data ;
    struct node *link ;
};

/*
---------
Arrays 

int i = 0 
i < n 
i++

--------
Linked Lists 

Node* curr = &root ;
curr != NULL 
curr = curr->next ;

*/

// #include <stdio.h>
// #include <stdlib.h>


// typedef struct Node {
//     int x ;
//     struct Node* next ;
// } Node;


// int main()
// {
//     Node root;
//     root.x = 15;
//     root.next = malloc(sizeof(Node));
//     root.next->x = -2 ;
//     root.next->next = malloc(sizeof(Node)) ;
//     root.next->next->x = 22;
//     root.next->next->next = NULL;

//     // Loop over linked list
//     // Node* curr = &root;
//     // while( curr != NULL)
//     // {   
//     //     printf("%d\n" , curr->x);
//     //     curr = curr->next;   
//     // }
    
//     // using for loop
//     for( Node* curr = &root ; curr!= NULL ; curr = curr->next)
//     {
//         printf("%d\n" , curr->x);
//         curr = curr->next;
//     }
    
//     printf("first: %d\n" , root.x);
//     printf("second: %d\n" , root.next->x);

//     free(root.next->next);
//     free(root.next);
//     return 0 ;
// };


