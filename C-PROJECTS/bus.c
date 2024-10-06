// C Program to implement Bus Reservation System
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// login system
// ticket purchase
// cancel tickets
// checking bus status


// structure to store bus information
// computer programming can be only learnt by building things 

struct Bus{
    int busNumber;
    char source[50];
    char destination[50];
    int totalSeats;
    int availableSeats;
    float fare;
};

// user login information
struct User{
    char username[50];
    char password[50];
};

// function to display the main menu
void displayMainMenu(){
    printf("\n=== Main Menu ===\n");
    printf("1. Login\n");
    printf("2. Exit\n");
    printf("Enter your choice: ");
}

// fn to display user menu
void displayUserMenu()
{
    printf("User Menu");
    printf("1. Book a Ticket\n");
    printf("2. Cancel a Ticket");
    printf("3. Check Bus Status\n");
    printf("4. Logout\n");
    printf("Enter your choice: ");
}

// fn to perform user login
int loginUser(struct User users[] , int numUsers , char username[] , char password[])
{
    for(int i = 0 ; i< numUsers ; i++)
    {
        if(strcmp(users[i].username , username) == 0 && strcmp(users[i].password , password) == 0)
        {
            return i; // returning the index of the logged-in user 
        }
    }
    return -1; // return -1 if login fails

}

// fn to book tickets 
void bookTicket(struct Bus buses[] , int numBuses)
{
    printf("\nEnter Bus number");
    int busNumber ;
    scanf("%d" , busNumber);
    int index = -1;
    for(int i = 0 ; i < numBuses ; i++)
    {
        if(buses[i].busNumber == busNumber)
        {
            index = i ;
            break;
        }
    }

    if(index == -1)
    {
        printf("Bus with the %d is not available" , busNumber);
    }
    else{
        printf("Enter Number of Seats: ");
        int seatsToBook;
        scanf("%d" , &seatsToBook);
        if(buses[index].availableSeats > seatsToBook)
        {
            buses[index].availableSeats -= seatsToBook;
            printf("Booking successful %d seats are booked on bus number %d" , seatsToBook ,busNumber);
        }else{
            printf("Sorry that no of seats are not availale");
            printf("%d " , seatsToBook);
            printf("%d\n", buses[index].availableSeats);
        }
    }
}

// fn to cancel tickets
void cancelTickets(struct Bus buses[] , int numBuses)
{
    printf("\n Enter Bus Number: ");
    int busNumber ;
    scanf("%d" , &busNumber);

    // find the bus with given busNumber
    for(int i = 0 ; i< numBuses ; i++)
    {
        if(buses[i].busNumber == busNumber)
        {
            printf("enter the no of seats to cancel");
            int seatsToCancel;
            scanf("%d" , &seatsToCancel);

            if(seatsToCancel > (buses[i].totalSeats - buses[i].availableSeats ))
            {
                printf("Error: You can't cancel more seats than were booked.\n");
            }else{
                buses[i].availableSeats += seatsToCancel ;
                printf("Cancellation successful! ");
            }
        }
    }
}

// fn to check the bus status
void checkBusStatus(struct Bus buses[] , int numBuses)
{
    printf("\n Enter the Bus Number");
    int busNumber ;
    scanf("%d" , &busNumber);

    // find the bus with the given busNumber
    int busIndex = -1;
    for(int i = 0 ; i< numBuses ;i++)
    {
        if(buses[i].busNumber == busNumber)
        {
            busIndex = i ;
            break;
        }
    }

    if(busIndex = -1)
    {
        printf("No such bus ");
    }else {
        printf("\nBus Number: %d\n", buses[busIndex].busNumber);
        printf("Source: %s\n", buses[busIndex].source);
        printf("Destination: %s\n", buses[busIndex].destination);
        printf("Total Seats: %d\n", buses[busIndex].totalSeats);
        printf("Available Seats: %d\n", buses[busIndex].availableSeats);
        printf("Fare: %.2f\n", buses[busIndex].fare);
    }
}

// driver  code
int main()
{   
    struct User users[5] = {
        {"user1", "pass1"}, {"user2", "pass2"}, {"user3", "pass3"}, {"user4", "pass4"}, {"user5", "pass5"},
    };
    int numUsers = 5;

    // Initialize bus data
    struct Bus buses[3] = {
        {101, "City A", "City B", 50, 50, 500.0},
        {102, "City C", "City D", 40, 40, 400.0},
        {103, "City E", "City F", 30, 30, 300.0},
    };
    int numBuses = 3;

    int loggedInUserId = -1;
    while(1)
    {
        if(loggedInUserId == -1)
        {
            displayMainMenu();
            int choice ;
            scanf("%d", &choice);
            if(choice == 1)
            {
                char username[50];
                char password[50];
                printf("Enter Username: ");
                scanf("%s" , username);
                printf("Enter password");
                scanf("%s" , password);

                loggedInUserId = loginUser(users, numUsers, username, password);   
                if(loggedInUserId == -1)
                {
                    printf("login failed . Please check your usename and password");
                }else{
                    printf("Login successful . Welcom %s\n", username);
                }
            }else if(choice == 2)
            {
                printf("exiting the program");
                break;
            }
            else {
                printf("Invalid choice . Please try again\n");
            }
        }
        else{
            displayUserMenu();
            int userChoice;
            scanf("%d" , &userChoice);

            switch(userChoice)
            {
                case 1:
                    bookTicket(buses , numBuses);
                    break;
                case 2:
                    cancelTickets(buses , numBuses);
                    break;
                            case 3:
                checkBusStatus(buses, numBuses);
                break;
            case 4:
                printf("Logging out.\n");
                loggedInUserId = -1;
                break;
            default:
                printf("Invalid choice. Please try again.\n");
            }
        }
    }    


    return 0 ;
}