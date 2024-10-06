// C program for the E-library
// Management System
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// create a structure of libraray
struct library{
    char author[20];
    char bookName[20];
    int pages ;
    float price ;
};

// Driver Code
int main()
{   
    int i = 0 ;
    struct library lib[100];
    int input ;

        printf("\n\n********######"
               "WELCOME TO E-LIBRARY "
               "#####********\n");
        printf("\n\n1. Add book infor"
               "mation\n2. Display "
               "book information\n");
        printf("3. List all books of "
               "given author\n");
        printf(
            "4. List the count of book"
            "s in the library\n");
        printf("5. Exit");
 
        // Enter the book details
        printf("\n\nEnter one of "
               "the above: ");
        scanf("%d", &input);

        switch(input)
        {
            case 1:
                // addBook();
                printf("enter book name =");
                scanf("%s" , lib[i].bookName);

                printf("enter author name = ");
                scanf("%s" , lib[i].author);
                
                printf("Enter pages");
                scanf("%d" , lib[i].pages);
                break;
            case 2:
                listBooks();
                break;
            case 3:
                authorBooks();
                break;
            case 4:
                count();
                break;
            case 5:
                exit(0);
                break;
        }

    return 0 ;
}


// this project is totally redundant and not teaching me anything so drop

