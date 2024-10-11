#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct array string 

typedef struct Customer {
    char name[50];
    char phoneNumber[15];
    float usage;
    float totalBill;
}Customer ;

int CustomerNumber = 0 ;
Customer arr[99] ;

void addRecord()
{   
    if(CustomerNumber >= 99)  printf("NO more customers") return ;
    
    printf("enter name");
    scanf("%s" , arr[CustomerNumber].name);
    printf("phone no");
    scanf("%s" , arr[CustomerNumber].phoneNumber);
    printf("usaage");
    scanf("%f" , arr[CustomerNumber].usage);
    double totalBill = 0.1*arr[CustomerNumber].usage;
    arr[CustomerNumber].totalBill = totalBill;
    CustomerNumber++;
}

void viewRecords()
{
    for(int i = 0 ; i <= CustomerNumber ; i++)
    {
        printf("%s" , arr[CustomerNumber].name);
        printf("%s" , arr[CustomerNumber].phoneNumber);
        printf("%f" , arr[CustomerNumber].usage);
        printf("%f" , arr[CustomerNumber].totalBill);
    }
}


void modifyRecord()
{   
    char phone[50];
    pirntf("enter your registered phone no");
    scanf("%s" , phone );
    int customerno ;
    for(int i = 0 ; i< CustomerNumber ; i++)
    {
        if( strcmp(phone , arr[i].phoneNumber) ) 
        {
            customerno = i;
            break;
        }
    }
    printf("enter the new usage");
    scanf("%f" , arr[customerno].usage);
    double newBill = 0.1*arr[customerno].usage;
    arr[customerno].totalBill = newBill;
}

void viewPayment(char phone[50])
{   
    int customerno = -1 ;
        pirntf("enter your registered phone no");
    scanf("%s" , phone );
    for(int i = 0 ; i < CustomerNumber ; i++)
    {
        if(strcmp(phone , arr[i].phoneNumber) == 0)
        {
            customerno = CustomerNumber;
            break;
        }
    }
    if(customerno == -1) { printf("We couldnt find this number")} ;
    printf("%s" , arr[customerno].name);
    printf("%f" , arr[customerno].totalBill);
}


void searchRecord()
{
    printf("givme phone no");
    pirntf("enter your registered phone no");
    scanf("%s" , phone );
    int customerno = -1;
    for(int i = 0 ; i < CustomerNumber ; i++)
    {
        if(strcmp(phone , arr[i].phoneNumber) == 0)
        {
            customerno = CustomerNumber;
            printf("%s" , arr[customerno].name);
            return ;
        }
    }
    printf("Record not found");
}


void deleteRecord()
{
    printf("givme phone no");
    pirntf("enter your registered phone no");
    scanf("%s" , phone );
    for(int i = 0 ; i < CustomerNumber ; i++)
    {
        if(strcmp(phone , arr[i].phoneNumber) == 0)
        {
            for(int j = i ; j < CustomerNumber -1 ; j++  )
            {
                arr[j] = arr[j+1];
            }
            CustomerNumber--;
            printf("Record has been deleted");
            return ;
        }
    }
    printf("\nRecord not found\n");
}

int main()
{   
        int choice; 
    char phoneNumber[15]; 
  
    while (1) { 
        displayMenu(); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
  
        switch (choice) { 
        case 1: 
            addRecord(); 
            break; 
        case 2: 
            viewRecords(); 
            break; 
        case 3: 
            printf( 
                "\nEnter phone number to modify record: "); 
            scanf("%s", phoneNumber); 
            modifyRecord(phoneNumber); 
            break; 
        case 4: 
            printf( 
                "\nEnter phone number to view payment: "); 
            scanf("%s", phoneNumber); 
            viewPayment(phoneNumber); 
            break; 
        case 5: 
            printf( 
                "\nEnter phone number to search record: "); 
            scanf("%s", phoneNumber); 
            searchRecord(phoneNumber); 
            break; 
        case 6: 
            printf( 
                "\nEnter phone number to delete record: "); 
            scanf("%s", phoneNumber); 
            deleteRecord(phoneNumber); 
            break; 
        case 7: 
            return 0; 
        default: 
            printf("\nInvalid choice! Please try again.\n"); 
        } 
    } 
    return 0 ;
}
