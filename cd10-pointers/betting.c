// playing a betting game 
// wanna play 
// cash = 100 
// ask for bet 
//  bet == 0 or bet > cash =>> break 
// play function 


// play
// int c []= { 'J K F}
// shuffle 
// for(int i = 0 ; i < 5 ; i++)
// // {
//         int x = rand() % 3; 
//         int y = rand( )% 3 ;
//         int temp = C[x];
//         C[x] = C[y];
//         C[y] = temp ;
// }
// 
// where is queen at ( 1 , 2 , 3)
// input = 2 
// ifC[ 2-1] === Q
// cash = Cash + 3*bet
//  cash = cash - bet

#include<stdio.h>
#include <time.h>
#include <stdlib.h>

int cash = 100 ;

void Play(int bet)
{
    // char C[]= {'J' , 'K'  , 'Q'};
    char *C = (char*)malloc(3*sizeof(char));
    C[0] = 'J' ;
    C[1] = 'Q';
    C[2]= 'K'; 
    printf("Shuffling... \n");
    srand(time(NULL));
    int i ;
 
    for(int i = 0 ; i< 5 ; i++)
    {
        int x = rand() % 3 ;
        int y = rand() % 3 ;
        int temp = C[x];
        C[x] = C[y]; 
        C[y] = temp;
    }


    int playerGuess ;
    printf("where is queen at 1 , 2 , 3\n");
    scanf("%d" , &playerGuess);

    if( C[playerGuess-1] == 'Q')
    {
        cash = cash + 3*bet ;
        printf("you win ! result = %c %c %c Total cash = %d\n" , C[0] , C[1] , C[2]  , cash );
    }else {
        cash = cash -bet ;
        printf("you lost man ! , left money %d\n" , cash);
    }

}



int main()
{
    printf("wanna play\n");
    // printf("enter your bet money");
    // int bet ; 
    // scanf("%d" , bet);
    int bet ;
    while(cash > 0)
    {
            printf("enter your bet money\n");
            scanf("%d" , &bet);
            if(bet == 0 || bet > cash) break ;
            Play(bet);
            printf("\n**********************\n");
    }

    return 0 ;
}

// Game development is gods work . 
