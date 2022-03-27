#pragma once
#include"FirstGeneration.h"
class TMario : public TFirstGenerationsOfGame
{
public:
	TMario(int _Difficult, std::string _name, bool _Hero, int _year, std::string _MainHero, int _CountOfSquid, int _CountOfMarshroom, int _CountOfKilledBirds, int _CountOfKilledTurtles);

	void Play();
	bool GameOver;
	bool Hero;

	void SetOfCountOfMarshroom(int _CountOfMarshroom);
	void SetCountOfKilledBirds(int _CountOfKilledBirds);
	void SetCountKilledTurtles(int _CountOfKilledTurtles);
	void SetCountOfKilleBullets(int _CountOfKilleBullets);

	int GetOfCountOfMarshroom();
	int GetCountOfKilledBirds();
	int GetCountKilledTurtles();
	int GetCountOfKilleBullets();

private:
	std::string MainHero;
	int Health;
	int CountOfMarshroom;
	int CountOfKilledBirds;
	int CountOfKilledTurtles;
	int CountOfKilleBullets;
	
};

