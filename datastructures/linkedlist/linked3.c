// Traverse a single linked list

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data ;
    struct node *link;
};

void count_of_nodes(struct node *head)
{   
    int count = 0 ;
    if(head == NULL)
    {
        printf("Linked list is empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }

}

// here we are assuming head is pointing towards a first node of a linked list
