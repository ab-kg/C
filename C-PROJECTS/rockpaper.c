// Lets go 

// rock paper scissor 
// you vs computer 


// user makes choice 
// according to the user choice and computer choice 
// result will be displayed 

// Tools: main() , printf() , scanf() , srand() , rand() , game() 

// time.h
// srand(time(NULL))
// computerChoice =  rand()%3

// game function 
// compare the choice of user and computer 

#include<stdio.h>
#include <time.h>
#include <stdlib.h>


// Rock vs Paper -> Paper wins.
// Rock vs Scissor -> Rock wins.
// Paper vs Scissor -> Scissor wins.

int Result(char hc , char cc);

int main()
{   
    char humanChoice;
    char computerChoice ;
    srand(time(NULL));


    do{
        printf("what is your choice , 'q' for quit ,  'r' for rock 'p' for paper 's' for scissors \n");
        scanf(" %c" , &humanChoice);

        if (humanChoice == 'q') {
            printf("Thanks for playing!\n");
            break;  // Exit the loop if the user chooses to quit
        }

        // determine computer choice
        int num = rand() % 3 ;
        if(num == 0)
        {
            computerChoice = 'r';
        }else if(num == 1)
        {
            computerChoice = 'p';
        }else {
            computerChoice = 's';
        }

        // determine result 
        int result ;
        result = Result(humanChoice , computerChoice);
        if(result == 0)
        {   
            printf("computers choice was %c\n" , computerChoice);
            printf("YOur choice was %c\n" , humanChoice);
            printf("the game was draw bruh!\n");
        }else if(result == 1) {
            printf("computers choice was %c\n" , computerChoice);
            printf("YOur choice was %c\n" , humanChoice);
            printf("Fker you won the game\n");
        }else{
            printf("computers choice was %c\n" , computerChoice);
            printf("YOur choice was %c\n" , humanChoice);
            printf("you lost the game\n");
        }

    }while (humanChoice != 'q');


    return 0 ;
}

int Result(char hc  , char cc)
{
    if(hc == cc)
    {
        return 0;
    }

    if(hc == 'r' && cc == 'p')
    {
        return -1;
    }else if( hc == 'r' && cc== 's')
    {
        return 1;
    }else if(hc == 'p' && cc == 's')
    {
        return -1;
    }else if( hc == 'p' && cc == 'r')
    {
        return 1 ;
    }else if( hc== 's' && cc == 'r' )
    {
        return -1;
    }else if(hc == 's' && cc== 'p')
    {
        return 1 ;
    }else {
        return 0;
    }


}
