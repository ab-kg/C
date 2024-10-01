#include <stdio.h>

// the secret word 
// letter that have been guessed 
// number of wrong guesses

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_WORD_LENGTH 50
#define MAX_TRIES 6

// struct to hold a word and its hint 
struct WordWithHint{
    char word[MAX_WORD_LENGTH];
    char hint[MAX_WORD_LENGTH];
};

// function to display the current state of the word 
void displayWord(const char word[] , const bool guessed[]);

// function to draw hangman 
void drawHangman(int tries);

int main()
{
    srand(time(NULL));

    struct WordWithHint wordList[] = {
        {"geeksforgeeks" , "computer coding" } ,
        {"elephant" , "a large mammal with a trunk"},
        {"pizza" , "a popular italian dish"} ,
        {"beach " , "Sandy shore by the sea"}
    };

    int wordIndex = rand()% 4 ;

    const char* secretWord = wordList[wordIndex].word ;
    const char* hint = wordList[wordIndex].hint ;

    int wordLength = strlen(secretWord);

    char guessedWord[MAX_WORD_LENGTH] = {0};
    bool guessedLetters[26] = {false};

    printf("Welcome to hangman");
    printf("Hint: %s\n", hint);

    int tries = 0 ;

    while(tries < MAX_TRIES)
    {
        printf("\n");
        displayWord(guessedWord , guessedLetters);
    }



    return 0 ;
}

void displayWord(const char word[] , const bool guessed[])
{
    printf("Word: ");
    


}






// void drawHangman 
void drawHangman(int tries)
{
    const char* hangmanParts[]
        = { "     _________",    "    |         |",
            "    |         O",   "    |        /|\\",
            "    |        / \\", "    |" };
 
    printf("\n");
    for (int i = 0; i <= tries; i++) {
        printf("%s\n", hangmanParts[i]);
    }
}



