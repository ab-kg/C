// CASE1 : inset at the beginning
// CASE2 : insert in between
// CASE3 : insert at the end 
// CASE4 : insert after a node 

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data ;
    struct Node *link ;
};

void traversal(struct Node* ptr)
{
    while(ptr != NULL)
    {
        printf("%d\n" , ptr->data);
        ptr = ptr->link ;
    }
}

struct Node* insert_first(struct Node * head , int data )
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->link = head ;
    ptr->data = data ;
    return ptr ;
}

// here in the insert_first function we are creating first creating a new node 
// and then adding the data 
// then pointing towards the first node which makes it now second node in the linked list
// then return the new node ptr

struct Node* insertAtIndex(struct Node *head , int data , int index)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node * p = head ;
    int i = 0 ;
    while(i != index-1 )
    {
        
    }
}


int main()
{
    struct Node* one ;
    struct Node* two ;
    struct Node* three ;

    one = (struct Node*)malloc(sizeof(struct Node));
    two = (struct Node*)malloc(sizeof(struct Node));
    three = (struct Node*)malloc(sizeof(struct Node));

    // created the first node and pointed it towards to second 
    one->data = 12;
    one->link = two;

    // second node data is allocated and pointed it towards the third 
    two->data = 23;
    two->link = three;

    // third node data is allocated and pointed towards NULL
    three->data = 234;
    three->link = NULL;

    // traversal(one);
    // here in the insert_first
    one = insert_first(one , 34);
    traversal(one);
    return 0 ;
}
