#include <iostream>
#include <string>
#include <memory>
#include "Developer_Example.h"

void SmartPtr_Information();
void SmartPtr_Example();

int main()
{
	std::cout << "\n\n\t*** Smart Pointer Demo! *** \n\n";

	SmartPtr_Information();
	SmartPtr_Example();
	return 0;
}

void SmartPtr_Information() // Displays all information on the types of pointers there are in teh (smart) scope
{
	std::cout << " \n\t *** Here is Information on the Three types of smart pointer! *** \n\n\n " << std::endl;

	std::cout << "std::unique_ptr : \t A smart Pointer that owns a dynamically allocated ammount of memory in the system. " << std::endl;
	std::cout << "Pros of Unique Pointers : \t Unique Pointers own the object it points to, and no other pointers can get to it. \t Once out of scope, it is deleted \t Good for temporary resources. " << std::endl;
	std::cout << "Cons of Unique Pointers : \t The data can only be refrenced when in the same scope. \t Can not be recalled later, or out of scope.  " << std::endl;
	std::cout << "When to use Unique Pointers : \t When you need a Dynamicly allocated ammount of memeory, Unique is good, since it also deletes the data afterword, giving you back that memory. " << std::endl;
	std::cout << " \n\n " << std::endl;
	std::cout << "std::shared_ptr : \t Owns the object it points to, but unlike a Unique, It allows for multiple refrences :: With an internal counter, It has Refrence Counting. Meaning it counts down to the last refrence before its deleted. " << std::endl;
	std::cout << "Pros of Shared Pointers : \t Allows Multiple Refrences. \t can point out of scope, but for a limited amout of times. \t Self Deletes after it goes over the allocated memory calls " << std::endl;
	std::cout << "Cons of Shared Pointers : \t you require extra memory to maintain a reference count \t and every time you copy or destroy a shared_ptr instance this reference count has to be incremented and decremented. " << std::endl;
	std::cout << "When to use Shared Pointers : \t This type of smart pointer is useful when you want to share your dynamically-allocated data around, the same way you would do with raw pointers or references. " << std::endl;
	std::cout << " \n\n " << std::endl;
	std::cout << "std::weak_ptr : \t A std::weak_ptr is basically a std::shared_ptr that doesn't increase the reference count. :: It is a pointer that holds a non-owning reference. " << std::endl;
	std::cout << "Pros of Weak Pointers : \t Allows multiple refrence. \t Can point out of scope, without limitation. \t  " << std::endl;
	std::cout << "Cons of Weak Pointers : \t This type of pointer can lead to issues later on in coding, such as circular refrence. " << std::endl;
	std::cout << "When to use Weak Pointers : \t When you want a pointer that can go out of scope without limit, this would be your answer. " << std::endl;
	std::cout << "\n\n\n\n\n" << std::endl;
}

void SmartPtr_Example()
{
	
	std::unique_ptr<Developer_Example> Player = std::make_unique<Developer_Example>();

	std::string PName;
	int PAge;
	std::string PQuote;
	

	std::cout << "Please enter your Name" << std::endl;
	std::getline(std::cin, PName);
	Player->SetName(PName);

	std::cout << "Please enter your Age" << std::endl;
	std::cin >> PAge;
	Player->SetAge(PAge);

	std::cout << "Please enter your favorite Quote" << std::endl;
	std::cin.ignore();
	std::getline(std::cin, PQuote);
	Player->SetQuote(PQuote);

	Player->Talk("I am you!");
	Player->GetAge();
	Player->UseQuote();



}