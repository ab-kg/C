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

    traversal(one);

    return 0 ;
}

