#include <iostream>
#include "Game.h"


TGame::TGame(int _Difficult, std::string _name, int _year)
{
	name = _name;
	Difficult = _Difficult;
	year = _year;
}

TGame::TGame()
{
	
}

void TGame::DoingSomethig()
{
	std::cout << "i'm first game" << std::endl;
}

int TGame::GetDifficult()
{
	return Difficult;
}

int TGame::GetYear()
{
	return year;
}

std::string TGame::GetName()
{
	return name;
}

void TGame::SetName(std::string NewName)
{
	name = NewName;
}

void TGame::SetDifficult(int Difficult)
{
	this->Difficult = Difficult;
}

void TGame::Foo()
{
	std::cout << "Foo" << std::endl;
}
