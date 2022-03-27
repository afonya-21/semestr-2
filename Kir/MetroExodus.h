#pragma once
#include "AAAGames.h"
class TMetroExodus : public TAAAGames
{
public:
	virtual void playing();
	TMetroExodus();


private:
	int Year;
	std::string NameOfCreator;
};