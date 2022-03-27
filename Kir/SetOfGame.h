#pragma once
#include "AAAGames.h"

class SetOfGame
{
public:

	SetOfGame();
	~SetOfGame();

	void Print();



	void AddGame(TAAAGames* robot);

private:
	TAAAGames** Set;
	int CountOfGames;

};