#include <iostream>
#include "function.h"
using namespace std;

int main()
{

    vector <string> wordList;
    rfile(DATA_FILE, wordList );
    do{
        string secretWord = selectWord(wordList);
        if(secretWord.length() < 1)
        {
            cout << "Error reading vocabulary file " << DATA_FILE;
            return -1;
        }
        string guessedWord = string(secretWord.length(), '-');
        int wrongChoice = 0;
        bool check = true;
        startGame();
        string selectedLetter;
        do{
            renderGame(guessedWord, wrongChoice, selectedLetter);
            char letter = getALetter(selectedLetter);
            check = logicGame(letter, secretWord);
            updateWord(letter, secretWord, guessedWord, check);
            updateChoice(wrongChoice, check);
            system("cls");
        }while( wrongChoice < Max_wrong_choices && !gameOver(secretWord, guessedWord));
        renderGame(guessedWord, wrongChoice, selectedLetter);
        displayResult(wrongChoice, secretWord);
        Sleep(2000);
        system("cls");
    }
    while(wannaPlayAgain());
    return 0;
}
