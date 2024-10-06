#include <stdio.h>
#include <string.h>

#define MAX 10

// taking a vote from the user
// storing the different votes  --> can be done by global variables
// calculating the votes
// declaring results

// structure of Candidate 
typedef struct Candidate{
    char name[40];
    char symbol;
    int votes;
}Candidate ;

Candidate allCandidates[MAX];

int candidateCount = 0 ;

char symbols[10] = {'!', '@', '#', '$', '%', '^', '&', '*', '~', '+' };

int symbolsTaken[11];


int mai()
{   
    // initializing necessary data structures
    for(int i = 0 ; i< 11 ; i++)
    {
        symbolsTaken[i] = 0;
    }

    // getting the no of candidates
    printf("no of candidates");
    scanf("%d", &candidateCount);
    if(candidateCount > MAX)
    {
        printf("Number of candidates cannot be greater");
        return 0 ;
    }

    // filling the details of candidate
    for(int i  = 0 ; i < candidateCount; i++)
    {
        fillCandidate(i);
    }

    //getting the number of voters
    int numVoters; 
    printf("Enter the number of voters: "); 
    scanf("%d", &numVoters); 

    // collecting votes
    for(int i = 0 ; i< numVoters ; i++)
    {
        getvotes(i);
    }

    return 0 ;
}

void fillCandidates(int cNum )
{   
    printf("available symbols\n");
    for(int i = 0 ; i < 11 ;i++)
    {
        if(symbolsTaken[i] == 0)
        {
            printf("%d symbols available" , symbols[i] );
        }
    }

    int num = 0;

    printf("Enter the symbol num of candidate %d" , cNum + 1);
    scanf("%d", &num);

    symbolsTaken[num -1] = 1;
    allCandidates[cNum].symbol = symbols[num-1];
    
    printf("enter the name of candidate");
    scanf("%s" , allCandidates[cNum].name);
    allCandidates[cNum].votes = 0 ;
}

// fn to display all candidates
void displayCandidates()
{
    for(int i = 0 ; i< candidateCount ; i++)
    {
        printf("Candidate name : %s" , allCandidates[i].name);
        printf("Candidate symbol: %c" , allCandidates[i].symbol);
        // printf("Candidate votes: %d", allCandidates[i].count);
    }
}



void getvotes(int vNum)
{
    displayCandidates();
    
    printf("voter %d ,  please enter your choice (1-%d)" , vNum  , candidateCount);
    int choice ;
    scanf("%d" , choice);

    // checking for the valid choice
    if(choice >= 1 && choice <= candidateCount)
    {
        allCandidates[choice -1].votes++;
    }else{
        printf("invalid choice");
        getvotes(vNum);
    }
}



void getResults() 
{ 
    int maxVotes = 0; 
    int winnerIndex = -1; 
    int winnerFrequency = 0; 
    for (int i = 0; i < candidateCount; i++) { 
        if (allCandidates[i].votes > maxVotes) { 
            maxVotes = allCandidates[i].votes; 
            winnerIndex = i; 
        } 
    } 
  
    for (int i = 0; i < candidateCount; i++) { 
        if (allCandidates[i].votes == maxVotes) { 
            winnerFrequency++; 
        } 
    } 
  
    printf("\n-----RESULT-----\n"); 
  
    if (winnerFrequency > 1) { 
        printf("No candidate has majority votes\n"); 
    } 
    else if (winnerIndex != -1) { 
        printf("The winner is: %s\nCandidate Symbol: "
               "%c\nwith %d votes!\n", 
               allCandidates[winnerIndex].name, 
               allCandidates[winnerIndex].symbol, maxVotes); 
    } 
    else { 
        printf("No winner\n"); 
    } 
}