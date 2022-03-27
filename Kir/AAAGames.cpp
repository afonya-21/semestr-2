#include "AAAGames.h"
#include <iostream>
TAAAGames::TAAAGames(bool _OpenWorld, bool _Histrory, int _Year, bool _Coop, std::string _NameOfCreator)
{
	OpenWorld = _OpenWorld;
	History = _Histrory;
	Year = _Year;
	Coop = _Coop;
	NameOfCreator = _NameOfCreator;
}

TAAAGames::TAAAGames()
{
}

void TAAAGames::playing()
{
	std::cout << "I'm AAAGame, my name is " << ' ' << this << ' ' << std::endl;
}
