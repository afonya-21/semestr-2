#pragma once
#include "FirstGeneration.h"
#include "Devices.h"
class TSecondGenerationOfGame : TFirstGenerationsOfGame
{
public:
	
	TSecondGenerationOfGame(bool _Graphic3d, Devices _Device, int _Year, std::string _NameOfCreator);
	TSecondGenerationOfGame();
protected:
	bool Graphic3d;
	Devices Device;
private:
	int Year;
	std::string NameOfCreator;
};