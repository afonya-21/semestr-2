#include <iostream>
#include "AAAGames.h"
#include "HorizonZeroDawn.h"
#include "MetroExodus.h"
#include "SetOfGame.h"

int main()
{
	THorizonZeroDawn horizon;
	TMetroExodus metro;
	SetOfGame set ;

	set.AddGame(&horizon);
	set.AddGame(&metro);
	set.Print();

	return 0;
}