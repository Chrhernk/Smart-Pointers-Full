#include "Developer_Example.h"

void Developer_Example::Talk(std::string stufftoSay)
{
	std::cout << Name << " : " << stufftoSay << std::endl;
}

void Developer_Example::UseQuote()
{
	std::cout << Name << " : My quote is " << Quote << std::endl;
}