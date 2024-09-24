// i am iterating over linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int  x;
    struct Node  *next;
}Node ;




int main(int argc , char* argv[])
{
    Node root ;
    root.x = 15 ;
    root.next = NULL;




    struct Node *curr ;
    curr = &root;   

    // while( curr != NULL)
    // {
    //     printf("%d " , curr->x);
    //     curr = curr->next ;
    // }

    for(curr = &root ; curr != NULL ; curr = curr->next)
    {
        printf("%d" , curr->x);
        curr = curr->next;
    }

    free(root.next->next);
    free(root.next);
    return 0 ;
}




// --------------------
// Simple program i wrote 


// int main()
// {
//     node n1 , n2 , n3 ;
//     n1.x = 3;
//     n1.link = &n2;

//     n2.x = 4;
//     n2.link = &n3;

//     n3.x = 5 ;
//     n3.link = NULL;

//     int count ;
//     node *root ;
//     root = &n1;
//     while(root != NULL)
//     {
//         count++;
//         root = root->link;
//     }

//     printf("%d"  , count);

//     return 0 ;
// }
