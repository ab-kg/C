#include <stdio.h>
#include <stdlib.h>

struct list {
    int *data ;
    int numItems ;
    int size ;
};

void addToList(struct list *mylist , int item );


int main()
{
    struct list myList ;
    int amount ;

    // create a list and start with enough space for 10 items
    myList.numItems = 0 ;
    myList.size = 10 ;
    myList.data = malloc(myList.size * sizeof(int));


    // find out if memory allocation was successful 
    if(myList.data == NULL )
    {
        printf("Memory allocation failed");
        return 1 ;
    }

    // add any no of items to list 
    amount = 44 ;
    for(int i = 0 ; i < amount ; i++)
    {
        addToList(&myList , i+1);
    }

}

