#include <iostream>
#include "function.h"
using namespace std;

int main()
{
    do{
        string secretWord = selectWord();
        string guessedWord = string(secretWord.length(), '-');
        int wrongChoice = 0;
        bool check = true;
        startGame();
        do{
            renderGame(guessedWord, check, wrongChoice);
            char letter = getALetter();
            check = logicGame(letter, secretWord);
            guessedWord = updateWord(letter, secretWord, guessedWord, check);
            wrongChoice = updateChoice(wrongChoice, check);
            system("cls");
        }while( wrongChoice < Max_wrong_choices && !gameOver(secretWord, guessedWord));
        renderGame(guessedWord, check, wrongChoice);
        displayResult(wrongChoice, secretWord);
        Sleep(2000);
        system("cls");
    }
    while(wannaPlayAgain());
    return 0;
}
