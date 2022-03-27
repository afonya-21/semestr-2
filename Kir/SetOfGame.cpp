#include "AAAGames.h"
#include <iostream>
#include "SetOfGame.h"

SetOfGame::SetOfGame()
{
	CountOfGames = 0;
	Set = nullptr;
}

SetOfGame::~SetOfGame()
{
	if (Set != nullptr)
		delete[] Set;

}

void SetOfGame::Print()
{
	for (int q = 0; q < CountOfGames; q++)
	{
		Set[q]->playing();
	}
}

void SetOfGame::AddGame(TAAAGames* game)
{


	if (CountOfGames == 0)
	{
		Set = new TAAAGames * [1];
		CountOfGames = 1;
		Set[0] = game;
	}
	else
	{
		TAAAGames** temporary = new TAAAGames * [CountOfGames + 1];

		for (int q = 0; q < CountOfGames; q++)
		{
			temporary[q] = Set[q];
		}

		delete Set;
		Set = temporary;
		Set[CountOfGames] = game;
		CountOfGames++;


	}
}