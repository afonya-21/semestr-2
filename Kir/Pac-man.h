#pragma once

#include"FirstGeneration.h"
class TPacman : public TFirstGenerationsOfGame
{
public:
	TPacman(int _Difficult, std::string _name, bool _Hero, int _year, std::string _MainHero, int _CountOfSquid);

	void Play();
	bool GameOver;
	bool Hero;
	

private:
	std::string MainHero;
	int Health;
	int CountOfSquid;
};



