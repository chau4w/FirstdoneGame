#include "function.h"
#include<ctime>
void rfile()
void rfile(const string DATA_FILE, vector <string>& wordList)
{
    ifstream file(DATA_FILE);
    if( file.is_open() )
    {
        string word;
        while(file >> word)
        {
            wordList.push_back(word);
        }
        file.close();
    }
}
string selectWord(vector <string> wordList)
{
    if(wordList.size() > 0)
    {
        srand(time(NULL));
        return wordList[rand() % wordList.size()];
    }
    else return "";
}
char getALetter(string& selectedLetter)
{
    cout << "Please enter the letter: ";
    char letter;
    cin >> letter;
    letter = tolower(letter);
    selectedLetter.push_back(letter);
    selectedLetter.push_back(' ');
    return letter;
}
bool logicGame( char letter, string secretWord)
{
    if( (int)secretWord.find(letter) == -1) return 0;
    else return 1;
}
void updateWord(char letter, const string& secretWord, string& guessedWord, bool check)
{
    if(check == true){
        for(int i = 0; i < secretWord.length(); i++){
            if(secretWord[i] == letter) guessedWord[i] = letter;
        }
    }
}
void updateChoice(int& wrongChoice, bool check)
{
    if(check == false) {wrongChoice = wrongChoice + 1 ;}
}
void renderGame( string guessedWord, int wrongChoice, string selectedLetter)
{
    cout << FIGURE[wrongChoice];
    cout << "Your total wrong answers: " << wrongChoice << endl << selectedLetter <<endl;
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
