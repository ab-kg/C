#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// here using i we are keeping a total count of students here 
int i= 0;

// this is the student info of student stored in memory 
// all together using structure 
struct sinfo{
    char fname[20];
    int roll ;
    float cgpa ;
    int cid[5];
} st[55];

void addStudent();
// fn to find the student 
// by the roll number 

// here we are looping as we know total number of students as we have stored that value in i 
// we loop through that number and find the rollno which matches with the input 
// then  once we find the student , we print his all the values he has 
void find_rl()
{
    int x ;
    printf("Enter the roll Number\n");
    scanf("%d" , &x);
    for(int j = 0 ; j<i ; j++)
    {
        if(x == st[j].roll)
        {
            printf("the student is\n");
            printf("%s" , st[j].fname);
        }
        // for(int k = 0 ; k < 5 ; k++)
        // {
        //     printf("The course ID are %d\n" , st[j].cid[k]);
        // }
        printf("\n");
        return;
    }
    printf("Student with roll no %d not found\n" , x) ;
}

// fn to find the student by firstname
// same procedure as above , we just loop throught the students list as we know the strength 
// find the student and print his details
void find_fn()
{
    char fname[50];
    printf("Enter the fname\n");
    scanf("%s" , fname);

    for(int j = 0; j < i ;j++ )
    {
        if(  !strcmp(st[j].fname , fname) )
        {
            printf("the student is\n");
            printf("the first namme is %s\n" , st[j].fname );
            printf("the courses are as follows. ");
            for(int k = 0 ; k < 5 ; k++)
            {
                printf("%d " , st[j].cid[k]);
            }
            printf("\n");
            return ;
        }
    }
    printf("student with name %s not found. \n" , fname );
}

void find_students()
{
    int courseId ;
    printf("Enter the course Id to find all the enrolled students\n");
    scanf("%d" , &courseId);
    for(int j = 0 ; j < i ; j++)
    {
        for(int k = 0 ; k < 5 ; k++)
        {
            if(st[j].cid[k] == courseId)
            {
                printf("this student: %s is enrolled in the course %d\n" , st[j].fname , courseId);
                // here i learnt the importance of break statements
                // if i want to break out of that particular loop that i am in
                // as in this case as i print the name of the person there is no need in looping
                // even though it would not be a problem as name will not be printed again 
                break ;
            }
        }
    }
}




// Function to delete a student 
// how do i delete a student who has been registered int the array in which structure element is stored if i can call that 
// we need to delete that element from the array 


void deleteStudents()
{
    int a ;
    printf("enter roll number which you want to delete\n");
    scanf("%d" , &a);
    int found = 0 ;
    for(int j = 0 ; j< i ; j++)
    {
        if(a == st[j].roll)
        {   
            found = 1 ;
            for(int k = j ; k < -1 ; k++ )
            {
                st[k] = st[k + 1];
            }
            i--;

            break; // exit the loop as we did the job of deleting the required 
        }
    }
    if(found){  
    printf("The roll number is removed successfully\n");
    }else{
        printf("the roll no is not found !\n");
    }
}

// function to update a student info 
// we can take first roll 
// then find the student using fn and once we found the man , updating the details is no big deal 

void updateDetails()
{
    printf("Enter the roll number\n");
    long int x ;
    scanf("%ld" , &x);
    for(int j= 0 ; j< i ; j++)
    {
        if(st[j].roll == x)
        {
            printf("1. first name\n"
                   "2. roll no.\n"
                   "3. CGPA\n"
                   "4. courses\n");
            int z ;
            scanf("%d" , &z);
            switch(z)
            {
                case 1:
                    printf("enter the new , first name\n ");
                    scanf("%s" , st[j].fname);
                    break ;
                case 2:
                    printf("enter the new roll no\n");
                    scanf("%d" , &st[j].roll);
                    break ;
                case 3:
                    printf("enter the CGPA\n");
                    scanf("%f" , &st[j].cgpa);
                    break ;
                case 4:
                    printf("enter the courses\n");
                    for(int k = 0 ; k < 5 ; k++)
                    {
                        scanf("%d" , &st[j].cid[k] );
                    }
                    break ;
            }
            printf("Updated Successfullly.\n");
        }
    }
}

void totalStudents();
void printAll();

int main()
{   
    addStudent();
    int choice , count ;
    while(1)
    {   
        printf("The Task that you "
       "want to perform\n");
        printf("1. Add new  Student Details\n");
        printf("2. Find the Student "
               "Details by Roll Number\n");
        printf("3. Find the Student "
               "Details by First Name\n");
        printf("4. Find the Student "
               "Details by Course Id\n");
        printf("5. Find the Total number"
               " of Students\n");
        printf("6. Delete the Students Details"
               " by Roll Number\n");
        printf("7. Update the Students Details"
               " by Roll Number\n");
        printf("8. print all name\n");
        printf("9. to exit");
        printf("Enter your choice to "
               "find the task\n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;
            case 2:
                find_rl();
                break;
            case 3:
                find_fn();
                break;
            case 4:
                find_students();
                break;
            case 5:
                totalStudents();
                break;
            case 6:
                deleteStudents();
                break;
            case 7:
                updateDetails();
                break;
            case 8:
                printAll();
                break;
            case 9:
                exit(0);
                break;

        }

    }
}

void printAll()
{
    printf("we are printing all the values here.");
    for(int j = 0 ; j < i ; j++)
    {
        printf("%s\n" , st[j].fname);
    }
}

void totalStudents()
{
    printf("total no of students %d\n" , i);
    printf("max of 50 students can be allowed\n");
    printf("%d more students are allowd\n" , 50 -i);
}

// function to add the student
void addStudent()
{
    printf("name\n");
    scanf("%s" ,st[i].fname);
    printf("roll\n");
    scanf("%d" , &st[i].roll);
    printf("cg\n");
    scanf("%f", &st[i].cgpa);
    
    printf("enter the course id of each course .\n");
    for(int j = 0 ; j < 5 ; j++)
    {
        scanf("%d" , &st[i].cid[j]);
    }
    i = i+1 ;
}
