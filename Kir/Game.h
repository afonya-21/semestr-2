#pragma once


#pragma once
#include <string>


class TGame
{
public:


	TGame(int _Difficult, std::string _name, int year);
	TGame();

	void DoingSomethig();

	int GetDifficult();
	int GetYear();
	std::string GetName();

	void SetName(std::string NewName);
	void SetDifficult(int Difficult);

	virtual void Foo();

protected:
	
	int Difficult;


private:
	std::string name;
	int year;

};
