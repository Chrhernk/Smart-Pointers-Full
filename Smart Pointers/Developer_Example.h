#pragma once
#include <string> 
#include<iostream>
class Developer_Example
{

private:

	std::string Name; // Users Name
	int Age = 0; // Users Age
	std::string Quote; // A quote that could be a favorite of the users

public:

	void Talk (std::string); // Function allowing speach

	void UseQuote(); // function for saying the quote

	void SetName(std::string NN) { Name = NN; } // setting Name
	void SetAge(int YearsAlive) { Age = YearsAlive; } // setting Age
	void SetQuote(std::string SpeachBubble) { Quote = SpeachBubble; } // Setting Quote

	void GetAge() { std::cout << Name << ": I am " << Age << std::endl; }

};

