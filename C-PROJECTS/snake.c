#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

// function to roll a six-sided dice 
int rollDie() { return rand()% 6+1 ;}

// global variables to store positions of player1 , player2 
int player1 = 0 , player2 = 0 ;

// function to print the board 
void printBoard()
{
    // logic to print the snake-ladder game board 
    int board[101];
    int k =100 ;

    for(int i = 1 ; i <= 101 ; i++)
    {
        board[i] = i ;
    }

    for(int i= 0 ; i< 10 ; i++)
    {
        for(int j = 0 ; j<10 ; j++)
        {   
            if( k == player1 && k == player2)
            {
                printf("%s" , "#p1&#p2");
            }else if(k == player2){
                printf("%s" , "#p2");
            }else if(k == player1 )
            {
                printf("%s" , "#p1");
            }
            else{
                printf("%3d  " , board[k] );
                
            }
            k = k-1 ;
        }
        printf("\n");
    }
}


// function to move the player 
int movePlayer(int currentPlayer , int roll)
{
    int newPostion = currentPlayer + roll;

    int snakesAndLadders[101];
    // we first stores all the values as zero 
    for(int i = 0 ; i< 100 ; i++)
    {   
        snakesAndLadders[i]= 0 ;
    }

    // here positive weights represent ladder
    // and negative wieghts represent a snake 
    snakesAndLadders[6] = 40; 
    snakesAndLadders[23] = -10; 
    snakesAndLadders[45] = -7; 
    snakesAndLadders[61] = -18; 
    snakesAndLadders[65] = -8; 
    snakesAndLadders[77] = 5; 
    snakesAndLadders[98] = -10; 

    int newSquare = newPostion + snakesAndLadders[newPostion];

    if(newSquare > 100)
    {
        return currentPlayer;
    }

    return newSquare;
}



// main function 
int main()
{   
    srand(time(0));
    int currentPlayer = 1 ;
    int won = 0 ;

    printf("Snake and Ladder Game\n");

    while(!won)
    {
        printf("\nPlayer %d , press Enter to roll the dice", currentPlayer );
        getchar();
        int roll = rollDie();
        printf("You rolled a %d.\n" , roll);

        if(currentPlayer == 1)
        {
            player1 = movePlayer(player1 ,roll);
            printf("player 1 is now at square %d.\n\n" , player1);
            printBoard();
            if(player1 == 100)
            {
                printf("Player 2 wins!\n");
                won = 1;
            }
        }
        else {
            player2 = movePlayer(player2 , roll);
            printf("Player 2 is now at square %d.\n\n" , player2);
            printBoard();
            if(player2 == 100)
            {
                printf("player 2 wins\n");
                won = 1 ; 
            }
        }
        // switch to the other player 
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }

    return 0 ;
}
