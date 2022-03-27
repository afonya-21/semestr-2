#include "MetroExodus.h"
#include <iostream>

void TMetroExodus::playing()
{
	std::cout << "Now y're playing in MetroExodus " << this << std::endl;
}

TMetroExodus::TMetroExodus()
{
	Year = 0;
	NameOfCreator = "4AGames";
}
