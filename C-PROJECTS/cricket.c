#include<stdio.h>
#include<stdlib.h>

struct batsman {
    char name[25];
    int runs , score , balls , touns ,ones , twos , threes , fours , sixes;
    int max_six, max_run , max_four ;
    float str ;
} pl1[100] , pl3;

struct bowler {
    char name[25];
    int runsgv , wkttkn , overs;
    int max_w ;
    float econ ;
}pl2[100] , pl4;

int main()
{
    int plno , choice ;
    int n , i , m ;
    printf("enter the details of batsmans");
    printf("enter the no of batsman");
    scanf("%d" , &m);
    for(i = 0 ; i < m ; i++)
    {
        printf("Enter name of batsman%d:\n",i+1);
       scanf("%s",pl1[i].name);


       printf("Enter the number of ones scored by player%d:\n ",i+1);
       scanf("%d",&pl1[i].ones);


       printf("Enter the number of twos scored by player%d:\n ",i+1);
       scanf("%d",&pl1[i].twos);


       printf("Enter the number of threes scored by player%d:\n ",i+1);
       scanf("%d",&pl1[i].threes);


       printf("Enter the number of fours scored by player%d:\n ",i+1);
       scanf("%d",&pl1[i].fours); 

              printf("Enter the number of sixes scored by player%d:\n ",i+1);
       scanf("%d",&pl1[i].sixes);


       printf("Enter the balls played by the player%d:\n",i+1);
       scanf("%d",&pl1[i].balls);      
    }


    printf("\nEnter the bowlers details:\n");
    printf("Enter the number of bowlers:\n");
    scanf("%d",&n);

    for(i = 0 ; i< n ;i++)
    {
       printf("\nEnter name of bowler%d:",i+1);
       scanf("%s",pl2[i].name);


       printf("Enter the runs given by the bowler%d:\n ",i+1);
       scanf("%d",&pl2[i].runsgv);


       printf("Enter the overs bowled by the bowler%d:\n",i+1);
       scanf("%d",&pl2[i].overs);


       printf("Enter the wickets taken by the bowler%d\n",i+1);
       scanf("%d",&pl2[i].wkttkn);
    }
    printf("Thank you all details are recorded\n");

    do{
        printf("Enter you choice . 1> Batsman Details 2> Bowlers detail 3>Record 4>Exit");
        scanf("%d" , &choice);

        switch(choice)
        {
            case 1:
                printf("enter the batsman no :");
                scanf("%d" , &plno);
                plno--;
                printf("Player details:");
                pl1[plno].runs = (pl1[plno]*ones) + (2*pl1[plno]*twos) + (4*pl1[plno]*fours) + (6*pl1[plno]*sixes );
                printf("runs : %d" ,pl1[plno].runs );
                pl1[plno].str = (pl1[plno].runs/ pl1[plno].balls)*100;
                printf("Strike Rate: %d", pl1[plno].str);
                break;


            case 2:
                printf("Enter the bowler no");
                scanf("%d" , &plno);
                plno--;
                printf("Bowler Details");
                pl2[plno].econ = pl2[plno].runs/pl2[plno].overs;
                printf("Economy %d" , pl2[plno].econ);
                break;
            
            case 3:
                pl3.max_run = 0 ; pl4.max_w = 0  , pl3.max_four = 0 ; pl3.max_six = 0 ;
                
                for(i = 0 ; i < m ; i++)
                {
                    if(pl1[i].runs > pl3.max_run)
                    {
                        pl3.max_run = pl1[i].runs
                    };
                }

                for(i = 0 ; i < n ;i++)
                {
                    if(pl2[i].wkttkn > pl4.max_w)
                    {
                        pl4.max_w = pl2[i].wkttkn;
                    }
                }
        }   
    }while( chioce != 4 );

    return 0 ;
}