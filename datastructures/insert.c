// dynamic memory allocation
// pointers 
// [data][address] --> [data][address] --> [data][address]

        //      200         1000         300 
// [200] --> [2][100] --> [4][300] --> [6][0] --> NULL

// Structure can be used 
// C style of declaring things

#include <stdlib.h>
#include <stdio.h>

struct Node {
        int data ;
        struct Node* next ;
};

// struct Node* head ;
// global first 
void Insert(int x);
void Print();

void Insert(int x)
{
        Node* temp = (Node*)malloc(sizeof(struct Node));
        temp->data = x;
        temp->next = NULL;
        if(head !=  NULL) temp->next = head ;
        head = temp ;
}

void Print(Node* head)
{
        struct Node* temp = head ;
        printf("List is: ");
        while( head != NULL)
        {       
                printf("%d" , temp->data);
                temp = temp->next;
        }
        printf("\n");
}


int main()
{
        struct  Node* head = NULL ;
        printf("how many numbers ?\n");

        int n , i , x ;
        scanf("%d" , &n);
        for(int i = 0 ; i<n ; i++)
        {
                printf("Enter the number \n");
                scanf("%d" , &x);
                Insert(x);
                Print(head);
        }

        return 0 ;
}

