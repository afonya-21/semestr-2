#pragma once
#include "Game.h"
class TFirstGenerationsOfGame : public TGame
{
public:
	bool Hero;
	void playing();
	void SetNameOfCreator(std::string _NameOfCreator);
	std::string GetNameOfCreator();

	void SetStory(bool _HaveAStory);
	TFirstGenerationsOfGame(int _Difficult, std::string _name ,bool _Hero, int _year);
	TFirstGenerationsOfGame();

protected:
	bool HaveAStory;
private:
	int year;
	std::string NameOfCreator;
};