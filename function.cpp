#include "function.h"
#include<ctime>

string selectWord()
{
    int numberOfWord = sizeof(WORD_LIST) / sizeof(string);
    srand(time(NULL));
    int whatWord = rand() % numberOfWord;
    string cc = WORD_LIST[whatWord];
    return cc;
}
char getALetter()
{
    cout << "Please enter the letter: ";
    char letter;
    cin >> letter;
    return letter;
}
bool logicGame( char letter, string secretWord)
{
    if( (int)secretWord.find(letter) == -1) return 0;
    else return 1;
}
string updateWord(char letter, string secretWord, string guessedWord, bool check)
{
    if(check == true){
        for(int i = 0; i < secretWord.length(); i++){
            if(secretWord[i] == letter) guessedWord[i] = letter;
        }
    }
    return guessedWord;
}
int updateChoice(int wrongChoice, bool check)
{
    if(check == false) {wrongChoice = wrongChoice + 1 ;}
    return wrongChoice;
}
void renderGame( string guessedWord, bool check, int wrongChoice )
{
    cout << FIGURE[wrongChoice];
    cout << "Your total wrong answers: " << wrongChoice <<endl;
    cout << guessedWord << endl;

}
bool gameOver(string secretWord, string guessedWord)
{
    if(secretWord == guessedWord) return true;
    else return false;
}
void displayResult(int wrongChoice, string secretWord)
{
    if(wrongChoice < Max_wrong_choices) cout << "Congratulation, you win";
    else cout << "Game over! You are stupid. The correct answer is " << secretWord;
}
void startGame()
{
    for(int i = 3; i >= 1; i-- ){
        system("cls");
        cout << "Game starts in: " << i;
        Sleep(1000);
    }
    system ("cls");
    cout << "Start now !";
    Sleep(2000);
    system("cls");
}
bool wannaPlayAgain()
{
    cout << "Do you wanna try with another word?(1/0) ";
    char check;
    cin >> check;
    if(check == '1') return true;
    else return false;
}
