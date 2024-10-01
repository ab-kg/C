#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int rollDie() { return rand()% 6+1 ;}

int player1 = 0 , player2 = 0 ;
// keeping the player1 and player2 position as global 
// and trying to the print the board every time a roll is rolled

// we need two functions
// moveposition which changes the global variable as we roll the die
// printboard fn , as it moves the player accroding to their position
// ṇothing but prints a matrix of  10 by 10 without two nos as two places would be occupied by players

int movePlayer(int currentPlayer , int roll )
{
    int newPosition = currentPlayer + roll;

        int snakesAndLadders[101]; 
  
    for (int i = 0; i <= 100; i++) { 
        snakesAndLadders[i] = 0; 
    } 
    
      // here positive weights represent a ladder 
      // and negative weights represent a snake. 
    snakesAndLadders[6] = 40; 
    snakesAndLadders[23] = -10; 
    snakesAndLadders[45] = -7; 
    snakesAndLadders[61] = -18; 
    snakesAndLadders[65] = -8; 
    snakesAndLadders[77] = 5; 
    snakesAndLadders[98] = -10; 

    int newSquare = newPosition + snakesAndLadders[newPosition];

    if(newSquare != newPosition)
    {
        printf("You got bit motherfucker\n");
    }


    if(newSquare > 100)
    {
        return currentPlayer ;
    }

    return newSquare ;
}

void printBoard()
{   
    int board[101];
    for(int i = 1 ; i <= 101 ; i++)
    {
        board[i] = i ;
    }
    int k = 100 ;
    
    for(int i = 0 ; i< 10 ; i++ )
    {
        for(int j = 0 ; j <10 ; j++)
        {
            if( player1 == k && player2 == k )
            {
                printf("%s" , "#p1 #p1" );
            }else if( player2 == k)
            {
                printf("%s", "#p2");
            }else if( player1 ==  k )
            {
                printf("%s" , "#p1");
            }else {
                printf("%3d", board[k]);
            }
             k = k -1 ;
        }
        printf("\n");
    }

}


int main()
{   
    srand(time(0));
    int currentPlayer = 1 ;
    int won = 0 ;

    while(!won)
    {   

        printf("palyer %d plays the game" , currentPlayer);
        getchar();
        int roll = rollDie();
        printf("you rolled a %d\n" , roll);

        if(currentPlayer == 1)
        {
            player1 = movePlayer(player1 , roll);
            printf("player 1 is in poisition %d\n", player1);
            printBoard();
            if(player1 == 100)
            {
                printf("player 1 won \n") ;
                won = 1 ;
            }
        }
        else{
            player2 = movePlayer(player2 , roll);
            ("player 1 is in poisition %d\n", player2);
            printBoard();
            if(player2 == 100)
            {
                printf("player 1 won \n") ;
                won = 1 ;
            }
        }
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }
}

