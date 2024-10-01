// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node{
//     int x ;
//     struct Node* next;    
// }Node ;

// int main()
// {
//     Node root  ;
//     root.x = 12 ;
//     root.next = malloc(sizeof(Node));
//     root.next->x = 3;
//     root.next->next = NULL ;
//     printf("%d " , root.x);
//     printf("%d " , root.next->x);
//     // if we derefernce the pointer we get the shit right
//     free(root.next);
//     return 0 ;
// }


// Node* boot 
//   |
// root 
// [12][NULL] 

// newnode -> malloc 