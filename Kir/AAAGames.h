#pragma once
#include "SecondGeneration.h"
class TAAAGames : public TSecondGenerationOfGame
{
public:
	TAAAGames(bool _OpenWorld, bool _Histrory, int _Year, bool _Coop, std::string _NameOfCreator);
	TAAAGames();
	bool OpenWorld;
	virtual void playing();
	bool History;

private:
	int Year;
	std::string NameOfCreator;

protected:
	bool Coop;


};