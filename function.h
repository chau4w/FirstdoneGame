#ifndef FUNCTION_H_
#define FUNCTION_H_

#include "const.h"
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

string selectWord();
char getALetter();
bool logicGame(char, string);
string updateWord(char, string, string, bool);
int updateChoice(int, bool);
void renderGame(string, bool, int );
bool gameOver(string, string);
void displayResult(int, string);
void startGame();
bool wannaPlayAgain();

#endif // FUNCTION_H_
