// structure for hospital
#include <stdio.h>
#include <string.h>

struct Hospital {
    char name[50];
    char city[50];
    int beds;
    float price;
    float rating;
    int reviews;
};

// structure of patient

struct Patient {
    char name[50];
    int age;
};

// this function prints the details of hospital
void printHospitalData(struct Hospital hosp )
{
    printf("%s this is the hospital name" , hosp.name);
    printf("City: %s\n", hosp.city); 
    printf("Total Beds: %d\n", hosp.beds); 
    printf("Price per Bed: $%.2f\n", hosp.price); 
    printf("Rating: %.1f\n", hosp.rating); 
    printf("Reviews: %d\n", hosp.reviews); 
    printf("\n");
}

// funtion to print patients data
void printPatientsData(struct Patient p)
{
    printf("%s patient name:" , p.name);
    printf("patient age: %d" , p.age);
}


// there are many sorting algorithms for sorting bed according to bed's price
// there are multiple hospitals of struct Hospital 
// so actually we implemented bubble sort and did well with it 

void sortByPrice(struct Hospital hospitals[] , int n)
{
    // bubble sort 
    for(int i = 0 ; i < n-1 ; i++)
    {
        for(int j = 0 ; j < n-i -1  ; j++)
        {
            if(hospitals[j].price > hospitals[j+1].price)
            {
                struct Hospital temp = hospitals[j];
                hospitals[j] = hospitals[j+1];
                hospitals[j+1] = temp ;
            }
        }
    }
}


// function to sort hospitals by name 
// ascending order


// here we need to know how does the strcmp works
// to really look into the code of strcmp

// it takes two characters and subtracts the ASCII code of those things
// returns the difference
// if both the character are same the difference would be zero


void sortByName(struct Hospital hospitals[] , int n)
{   
    // using strcmp
    for(int i = 0 ; i < n-1 ; i++)
    {
        for(int j = 0 ; j <n- i -1 ; j++)
        {
            if(strcmp(hospitals[j].name , hospitals[j+1].name) > 0)
            {
                struct Hospital temp = hospitals[j];
                hospitals[j] = hospitals[j+1];
                hospitals[j+1] = temp ;
            }
        }
    }
}

// function to sort hospitals by rating and reviews
// simplify the data , you cannot do that 
// descending order 

void sortByRatingNReview(struct Hospital hospitals[] , int n)
{
    // bubble sort 
    // first understand the algorithm very well 
    // then remember the code
    for(int i = 0 ; i < n-1 ; i++)
    {
        for(int j = 0 ; j < n -i -1 ;j++)
        {
            if(hospitals[j].rating*hospitals[j].reviews < hospitals[j+1].rating*hospitals[j+1].reviews)
            {
                struct Hospital temp = hospitals[j];
                hospitals[j] = hospitals[j+1];
                hospitals[j+1] = temp;
            }
        }
    }
}


// function print the hospitals of any specific city 
// input as name of the city and returns the hospital present in the city

void printHospitalsinCity(struct Hospital hospitals[])
{
    char city[50];
    int hospitalsFound = 0 ;

    printf("Enter the city name (X , Y , Z): ");
    scanf("%s", city );

    printf("hospitals in %s" , city);

    for(int i = 0 ; i < 5 ; i++)
    {
        if(strcasecmp(hospitals[i].city , city) == 0 )
        {
            printf("Hospital Name %s\n" , hospitals[i].name);
            hospitalsFound++;
        }

    }

    if(hospitalsFound  == 0)
    {
        printf("No hospitals in this city %s" , city);
    }
}

// IN c we cant really compare strings
// the only we do is using strcmp and functions like these
// what these functions do is they point to both the character arrays


int main()
{
    struct Hospital hospitals[5] = 
    {
        {"Hospital A", "X", 100, 250.0, 4.5, 100}, 
        {"Hospital B", "Y", 150, 200.0, 4.2, 80}, 
        {"Hospital C", "X", 200, 180.0, 4.0, 120}, 
        {"Hospital D", "Z", 80, 300.0, 4.8, 90}, 
        {"Hospital E", "Y", 120, 220.0, 4.6, 110} 
    };

    // multi dimensional array of elements struct patient 
    // beautiful, try to recognize the data structures
   struct Patient patients[5][3] = { 
        {{"Amar", 35}, {"Manish", 45}, {"Atul", 28}}, 
        {{"Elvish", 62}, {"Debolina", 18}, {"Shruti", 55}}, 
        {{"Zafar", 50}, {"Rahul", 30}, {"Priya", 40}}, 
        {{"Amir", 22}, {"Asif", 38}, {"Prince", 60}}, 
        {{"Aditya", 28}, {"Aman", 48}, {"Sahil", 33}} 
    }; 

    int n = 5 ;
    int choice ;
    char city[50];

    do{
        printf("\n\n\n*********** Hospital Management System Menu:************\n\n"); 
        printf("1. Printing Hospital Data\n"); 
        printf("2. Printing Patients Data\n"); 
        printf("3. Sorting Hospitals by Beds Price\n"); 
        printf("4. Sorting Hospitals by Available Beds\n"); 
        printf("5. Sorting Hospitals by Name\n"); 
        printf("6. Sorting Hospitals by Rating and Reviews\n"); 
        printf("7. Print Hospitals in a Specific City\n"); 
        printf("8. Exit\n\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice);
        
    switch (choice) { 
            case 1: 
                printf("\nPrinting Hospital Data:\n\n"); 
                for (int i = 0; i < n; i++) { 
                    printHospitalData(hospitals[i]); 
                } 
                break; 
            case 2: 
                printf("Printing Patients Data:\n\n"); 
                for (int i = 0; i < n; i++) { 
                    printf("Hospital: %s\n", hospitals[i].name); 
                    for (int j = 0; j < 3; j++) { 
                        printPatientsData(patients[i][j]); 
                    } 
                } 
                break; 
            case 3: 
                printf("Sorting Hospitals by Beds Price (Ascending):\n"); 
                sortByPrice(hospitals, n); 
                for (int i = 0; i < n; i++) { 
                    printHospitalData(hospitals[i]); 
                } 
                break; 
            case 4: 
                printf("Sorting Hospitals by Available Beds (Descending):\n"); 
                sortByPrice(hospitals, n);  // Fix: Sorting by available beds 
                for (int i = 0; i < n; i++) { 
                    printHospitalData(hospitals[i]); 
                } 
                break; 
            case 5: 
                printf("Sorting Hospitals by Name (Ascending):\n"); 
                sortByName(hospitals, n); 
                for (int i = 0; i < n; i++) { 
                    printHospitalData(hospitals[i]); 
                } 
                break; 
            case 6: 
                printf("Sorting Hospitals by Rating and Reviews (Descending):\n"); 
                sortByRatingNReview(hospitals, n); 
                for (int i = 0; i < n; i++) { 
                    printHospitalData(hospitals[i]); 
                } 
                break; 
            case 7: 
                printHospitalsinCity(hospitals); 
                break; 
            case 8: 
                printf("Exiting the program.\n"); 
                break; 
            default: 
                printf("Invalid choice. Please enter a valid option.\n"); 
        } 
    } while (choice != 8); 
    return 0 ;
}
