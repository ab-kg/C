#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// things i got to learn in this project 
// strings copyin and comparing strcmp , strcpy
// reading writing opning file in folders 




// declaring all the functions
void checkBalance(char*);
void transferMoney(void);
void display(char*);
// void person(char*);
void login(void);
void loginsu(void);
void account(void);
void accountCreated(void);
// void afterlogin(void);
void logout(void);
// declaring gotoxy
// fn for setting
// cursor position

void gotoxy(int X, int Y)
{
    COORD c ;
    c.X = X ;
    c.Y = Y ;

    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE) , c 
    );
}

// creating a structure to store 
// data of the user  

struct pass {
    char fname[20];
    char lname[20];
    char fathername[20];
    char mothername[20];
    char address[20];
    char typeaccount[20];
    int date;
    int month;
    int year ;
    char adharnum[20] ;
    char pnumber[20] ;
    char username[20];
};

struct money {
    char usernameto[50];
    char userpersonfrom[50];
    long int money1;
};

struct userpass {
    char password[50];
};

// int main
int main()
{
    int i , a , b , choice ;
    int passwordLength;
    gotoxy(20 , 3);
    // Creating a Main
    // menu for the user
    printf("WELCOME TO BANK ACCOUNT SYSTEM\n\n");
    gotoxy(18, 5);
    printf("**********************************");
    gotoxy(25, 7);

    printf("DEVELOPER-Naman kumar");
    gotoxy(20 , 10);
    printf("1.... CREATE A BANK ACCOUNT");
 
    gotoxy(20, 12);
    printf("2.... ALREADY A USER? SIGN IN");
    gotoxy(20, 14);
    printf("3.... EXIT\n\n");
 
    printf("\n\nENTER YOUR CHOICE..");

    scanf("%d" , &choice);
    switch(choice)
    {
        case 1:
            system("cls");
            printf("\n\n USERNAME 50 CHARACTERS MAX !!");
            printf("\n\n PASSWORD 50 CHARACTERS MAX !! ");
            account();
            break;
        case 2:
            login();
            break;
        case 3:
            exit(0);
            break;

            getch();
    }
    return 0 ;
}

void account(void)
{
    char password[20];
    int passwordLength , i , seek = 0 ;
    char ch ;
    FILE *fp , *fu ;
    struct pass u1 ;
    struct userpass p1 ;
    struct userpass u2 ;

    // opening file to 
    // write data of a user 
    fp = fopen("username.txt" , "ab");

    // Inputs 
    system("cls");
    printf("\n\n!!!!CREATE ACCOUNT!!!!");
    printf("\n\nFirst name");
    scanf("%s" , &u1.fname);

    printf("\n\n\nLast name");
    scanf("%s" , &u1.lname);

    printf("\n\nFATHER's NAME..");
    scanf("%s", &u1.fathername);
 
    printf("\n\nMOTHER's NAME..");
    scanf("%s", &u1.mothername);
 
    printf("\n\nADDRESS..");
    scanf("%s", &u1.address);
 
    printf("\n\nACCOUNT TYPE");
    scanf("%s", &u1.typeaccount);

    printf("\n\nDATE OF BIRTH..");
    printf("\nDATE-");
    scanf("%d", &u1.date);
    printf("\nMONTH-");
    scanf("%d", &u1.month);
    printf("\nYEAR-");
    scanf("%d", &u1.year);
 
    printf("\n\nADHAR NUMBER");
    scanf("%s", &u1.adharnum);
 
    printf("\n\nPHONE NUMBER");
    scanf("%s", &u1.pnumber);
 
    printf("\n\nUSERNAME.. ");
    scanf("%s", &u1.username);
 
    printf("\n\nPASSWORD..");

    // taking the password in the form of stars
    for( i = 0 ; i< 50 ; i++)
    {
        ch = getch();
        if(ch != 13 )
        {
            password[i] = ch ;
            ch = '*';
            printf("%c" , ch);
        }
        else 
            break;
    }

    // writing to the file
    fwrite(&u1 , sizeof(u1) , 1 , fp );
    // closing file
    fclose(fp);

    // Calling another function
    // after successful creation of account

    accountCreated();
}

void accountCreated()
{
    system("cls");
    printf("PLEEASE wait\n\n your data is processing ...");
    for(int i = 0 ; i< 2000000000; i++)
    {
        i++;
        i--;
    }
    gotoxy(30 , 10);
    printf("ACCOUNT CREATED SUCCESSFULLY");
    gotoxy(0 , 20);
    printf("Press enter to login");
    getch();
    login();
}


void login()
{
    system("cls");
    char username[50];
    char password[50];

    int i , j , k;
    char ch ;
    FILE *fp , *fu;
    struct pass u1;
    struct userpass u2 ;

    // opening file of 
    // user data
    fp = fopen("username.txt" ,"rb");

    if(fp ==NULL)
    {
        printf("ERROR IN OPENING FILE");
    }
    gotoxy(34 , 2);
    printf("ACCCOUNT LOGIN");
    gotoxy(34 ,2);
    printf("*******************************************");
    gotoxy(35 , 10);
    printf("==== LOG IN ====");

    gotoxy(35, 12);
    printf("USERNAME.. ");
    scanf("%s", &username);

    gotoxy(35, 14);
    printf("PASSWORD..");
    scanf("%s" , &password);
    // input the password 
    for(i = 0 ; i< 50 ;i++)
    {
        ch = getch();
        if(ch != 13)
        {
            password[i] = ch ;
            ch = '*';
            printf("%c" , ch);
        }
        else 
            break;
    }
    // checking if username
    // exists in the file or not 
    while(fread(&u1 , sizeof(u1) , 1 , fp))
    {
        if(strcmp(username , u1.username) == 0 )
        {
            loginsu();
            display(username);
        }
    }
    // closing the file
    fclose(fp);
}

void loginsu(void)
{
    int i ;
    FILE *fp;
    struct pass u1;
    printf("Fetching account details ....\n");
    for(i = 0 ;  i < 20000 ; i++)
    {
        i++;
        i--;
    }
    gotoxy(30, 10);
    printf("LOGIN SUCCESSFUL....");
    gotoxy(0, 20);
    printf("Press enter to continue");
 
    getch();
}

// void account
// void accountCreated
// void login
// void loginsu
// void display
// void transferMoney
// void checkBalance
// void logout 

void display(char username1[])
{
    system("cls");
    FILE *fp;
    int choice , i ;
    fp = fopen("username.txt" , "rb");
    struct pass u1; 
    
    if(fp == NULL)
    {
        printf("error in opening file");
    }

    while(fread(&u1 , sizeof(u1) , 1 , fp))
    {
        if(strcmp(username1 , u1.username ) == 0)
        {
            printf("Welcome %s %s" , u1.fname , u1.lname);
        }
    }
    fclose(fp);
    gotoxy(0, 6);
    // int choice ;
    // Menu to perform different
    // actions by user
    printf(" HOME ");
    gotoxy(0, 7);
    printf("******");
    gotoxy(0, 9);
    printf(" 1....CHECK BALANCE");
    gotoxy(0, 11);
    printf(" 2....TRANSFER MONEY");
    gotoxy(0, 13);
    printf(" 3....LOG OUT\n\n");
    gotoxy(0, 15);
    printf(" 4....EXIT\n\n");
 
    printf(" ENTER YOUR CHOICES..");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1 :
            checkBalance(username1);
            break;
        case 2: 
            transferMoney();
            break;
        case 3:
            logout();
            login();
            break;
        case 4:
            exit(0);
            break;
    }

}

// function to transfer 
// money from one user to 
// another 

void transferMoney()
{
    int i , j ;
    FILE *fm , *fp ;
    struct pass u1 ;
    struct money m1;
    char usernamet[20];
    char usernamep[20];
    system("cls");

    // opening file in read mode to 
    // read user's username
    fp = fopen("username.txt" , "rb");


    // creating another file
    // to write amount along with 
    // username to which amount 
    // is going to be transferred
    fm = fopen("mon.txt", "ab");

    gotoxy(33, 4);
    printf("---- TRANSFER MONEY ----");
    gotoxy(33, 5);
    printf("========================");
 
    gotoxy(33, 11);
    printf("FROM (your username).. ");
    scanf("%s", &usernamet);
 
    gotoxy(33, 13);
    printf(" TO (username of person)..");
    scanf("%s", &usernamep);

    while(fread(&u1 , sizeof(u1) , 1 , fp))
    {
        if(strcmp(usernamep , u1.username) == 0 )
        {
            strcpy(m1.usernameto , usernamep);
            strcpy(m1.userpersonfrom , usernamet);
        }
    }
    gotoxy(33 , 16);

    printf("ENTER THE AMOUNT TO BE TRANSFERRED..");
    scanf("%d" , &m1.money1);

    fwrite(&m1 , sizeof(m1) , 1 , fm);
    gotoxy(0 , 26);
    printf("----------------------------");

    printf("transfering amount please wait ");

    for(i = 0 ; i < 70 ; i++)
    {
        for(j= 0 ; j< 123333333; j++)
        {
            j++ ;
            j--;
        }
        printf("*");
    }

    printf("AMOUNT SUCCESSFULLY TRANSFERRED....");
    getch();
    
    // close the files
    fclose(fp);
    fclose(fm);

    display(usernamet);
}

// function to checkBalance

void checkBalance(char username2[])
{

    int summoney = 0 ;
    struct money m1 ;
    FILE *fm ;
    fm = fopen("mon.txt" , "rb");

    while(fread( &m1 , sizeof(m1) , 1 , fm))
    {
        if(strcmp(username2 , m1.usernameto) == 0)
        {
            printf("%s" , m1.userpersonfrom);

            printf("%d" , m1.money1);
            // adding and 
            // finding total money
            summoney = summoney + m1.money1 ;
        }
    }

    printf("Total amount");
    printf("%d" , summoney);
    fclose(fm);
    display(username2);
}


void logout()
{
        int i, j;
    system("cls");
    printf("please wait, logging out");
 
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 25000000; j++) {
            i++;
            i--;
        }
        printf(".");
    }
 
    gotoxy(30, 10);
    printf("Sign out successfully..\n");
 
    gotoxy(0, 20);
    printf("press any key to continue..");
 
    getch();
}