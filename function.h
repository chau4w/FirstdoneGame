#ifndef FUNCTION_H_
#define FUNCTION_H_

#include "const.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <cctype>
#include <fstream>
#include <vector>
#include<ctime>

using namespace std;

void rfile(const string DATA_FILE, vector <string>& wordList);
string selectWord(vector <string>);
char getALetter(string&);
bool logicGame(char, string);
void updateWord(char, const string&, string&, bool);
void updateChoice(int&, bool);
void renderGame(string, int, string );
bool gameOver(string, string);
void displayResult(int, string);
void startGame();
bool wannaPlayAgain();

#endif // FUNCTION_H_
