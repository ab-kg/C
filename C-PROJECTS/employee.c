#include <stdio.h>
#include <string.h>

#define MAX 20

struct employee {
    char name[50];
    long int code ;
    char designation[50];
    int exp ;
    int age;
};



void hello_world() {
    printf("Hello, World!\n");
}

int num;
void showMenu();

struct employee emp[MAX] , tempemp[MAX] , sortemp[MAX] ,sortemp1[MAX];

void build()
{
    printf("Build The Table\n");
    printf("Maximum Entries can be %d\n", MAX);
    printf("Enter the number of Entries required: ");
    scanf("%d", &num);

    if(num > MAX)
    {
        printf("Maximum number of Entries are 20\n");
        num  = MAX;
    }
    printf("Enter the following data:\n");

    for(int i = 0 ; i < num; i++)
    {
        printf("Name: ");
        scanf("%s" , emp[i].name);

        printf("Employee ID: ");
        scanf("%ld" , &emp[i].code);

        printf("Designation: ");
        scanf("%s" , emp[i].designation);

        printf("Experience: ");
        scanf("%d", &emp[i].exp);

        printf("Age: ");
        scanf("%d", &emp[i].age);
    }

    showMenu();
}

void insert()
{
    if(num < MAX)
    {
        int i = num;
        num++;

        printf("Enter the information of the Employee");

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Employee ID: ");
        scanf("%ld", &emp[i].code);

        printf("Designation: ");
        scanf("%s", emp[i].designation);

        printf("Experience: ");
        scanf("%d", &emp[i].exp);

        printf("Age: ");
        scanf("%d", &emp[i].age);
    }else {
        printf("Employee Taable Full\n");
    }

    showMenu();
}

// Function to delete record at index i
void deleteIndex(int i )
{
    for(int j = i ; j < num -1 ; j++)
    {
        strcpy(emp[j].name , emp[j+1].name);
        emp[j].code = emp[j+1].code ;
        strcpy(emp[j].designation , emp[j+1].designation);
        emp[j].exp = emp[j+1].exp;
        emp[j].age = emp[j+1].age ;
    }
}

// function to delete record
void deleteRecord()
{
    printf("Enter the Employee ID to Delete Record: ");
    long int code ;
    scanf("%ld" , &code);

    for(int i = 0 ; i  < num ; i++)
    {
        if(emp[i].code == code)
        {
            deleteIndex(i);
            num--;
            break;
        }
    }
    showMenu();
}

// function to search a record 
void searchRecord()
{
    printf("Enter the employee ID to Search Record: ");

    long int code ;
    scanf("%ld" , &code);

        for (int i = 0; i < num; i++) {
        if (emp[i].code == code) {
            printf("Name: %s\n", emp[i].name);
            printf("Employee ID: %ld\n", emp[i].code);
            printf("Designation: %s\n", emp[i].designation);
            printf("Experience: %d\n", emp[i].exp);
            printf("Age: %d\n", emp[i].age);
            break;
        }
    }

    showMenu();
}


void showMenu()
{
    printf("-------------------------\n");
    printf("Employee Management System\n");
    printf("-------------------------\n\n");

    printf("Available Options:\n\n");
    printf("Build Table         (1)\n");
    printf("Insert New Entry    (2)\n");
    printf("Delete Entry        (3)\n");
    printf("Search a Record     (4)\n");
    printf("Exit                (5)\n");


    int option;
    scanf("%d", &option);

    // Call function on the basis of the
    // above option
    switch (option) {
        case 1:
            build();
            break;
        case 2:
            insert();
            break;
        case 3:
            deleteRecord();
            break;
        case 4:
            searchRecord();
            break;
        case 5:
            return;
        default:
            printf("Expected Options are 1/2/3/4/5\n");
            showMenu();
    }
}

int main()
{
    showMenu();
    return 0 ;
}


