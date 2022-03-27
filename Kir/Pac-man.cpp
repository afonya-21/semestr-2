#include "Pac-man.h"
#include <iostream>
TPacman::TPacman(int _Difficult, std::string _name, bool _Hero, int _year, std::string _MainHero, int _CountOfSquid) : TFirstGenerationsOfGame( _Difficult,  _name,_Hero, _year)
{
	MainHero = _MainHero;
	CountOfSquid = _CountOfSquid;

}

void TPacman::Play()
{
	std::cout << "you are playing in Pac-man now" << std::endl;
}


