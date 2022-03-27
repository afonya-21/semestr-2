#include "FirstGeneration.h"
#include<iostream>

void TFirstGenerationsOfGame::playing()
{
	std::cout << "i'm a first generation of game" << std::endl;
}

void TFirstGenerationsOfGame::SetNameOfCreator(std::string _NameOfCreator)
{
	NameOfCreator = _NameOfCreator;
}

std::string TFirstGenerationsOfGame::GetNameOfCreator()
{
	return NameOfCreator;
}

void TFirstGenerationsOfGame::SetStory(bool _HaveAStory)
{
	HaveAStory = _HaveAStory;
}

TFirstGenerationsOfGame::TFirstGenerationsOfGame(int _Difficult, std::string _name, bool _Hero, int _year )
{
	year = _year;
	Hero = _Hero;
}

TFirstGenerationsOfGame::TFirstGenerationsOfGame()
{
}
