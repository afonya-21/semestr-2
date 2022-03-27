#include "Mario.h"
#include <iostream>


TMario::TMario(int _Difficult, std::string _name, bool _Hero, int _year, std::string _MainHero, int _CountOfSquid, int _CountOfMarshroom, int _CountOfKilledBirds, int _CountOfKilledTurtles) : TFirstGenerationsOfGame(_Difficult, _name, _Hero, _year)
{
	MainHero = _MainHero;
	CountOfMarshroom = _CountOfMarshroom;
	CountOfKilledBirds = _CountOfKilledBirds;
	CountOfKilledTurtles = _CountOfKilledTurtles;
	CountOfKilleBullets = 0;
}

void TMario::Play()
{
	std::cout << "you are playing in MArio now" << std::endl;

}

void TMario::SetOfCountOfMarshroom(int _CountOfMarshroom)
{
	CountOfMarshroom = _CountOfMarshroom;
}

void TMario::SetCountOfKilledBirds(int _CountOfKilledBirds)
{
	CountOfKilledBirds = _CountOfKilledBirds;
}

void TMario::SetCountKilledTurtles(int _CountOfKilledTurtles)
{
	CountOfKilledTurtles = _CountOfKilledTurtles;
}

void TMario::SetCountOfKilleBullets(int _CountOfKilleBullets)
{
	CountOfKilleBullets = _CountOfKilleBullets;
}

int TMario::GetOfCountOfMarshroom()
{
	return CountOfMarshroom;
}

int TMario::GetCountOfKilledBirds()
{
	return CountOfKilledBirds;
}

int TMario::GetCountKilledTurtles()
{
	return CountOfKilledTurtles;
}

int TMario::GetCountOfKilleBullets()
{
	return CountOfKilleBullets;
}


