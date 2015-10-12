#include <iostream>
#include <string>
#include <vector>

/*
Simple program that represents a guest list. User inputs names that are to be 
added on a guest list. Then the programs tells the user how many people are
in the guest list and prints the names of each person.
*/

int main()
{
	// declares a vector (similair to arrays)
	std::vector<std::string> list; 
	
	// value to determine if user want to continue
	std::string cont = "y";
	
	// holds name of user
	std::string name;
	
	// holds users option of yes or no
	std::string userIn;
	
	// title for application
	std::cout << "=======================" << "\n";
	std::cout << " Electronic Guest List" << "\n";
	std::cout << "=======================" << "\n";
	std::cout << "\n\n\n\n";
	
	do 
	{
		// prompts user to enter name
		std::cout << "Enter person you'd like to add to your guest list" << "\n>";
		std::cin >> name;
	
		
		// adds users name to vector
		list.push_back(name);
		std::cout << "\t" << name << " added" << "\n";
		
		std::cout << "\n\n";
		
		// asks user if they want to add another name
		std::cout << "Would you like to add another person to your guest list? (y, n) : ";
		std::cin >> userIn;
		
		std::cout << "\n\n";
	} while (userIn.compare(cont) == 0);
	
	std::cout << "-------------------------------------------------------------------\n";
	
	// Tells user how many people are on their guest list
	std::cout << "There are " << list.size() << " people on your guest list. \n\n";
	
	// iterates thru the vector and prints out names on guest list
	for (unsigned int i = 0; i < list.size(); i++) 
	{
		std::cout << "Guest " << (i + 1) << " : " << list.at(i) << "\n";
	}
	
	std::cout << "-------------------------------------------------------------------\n";	
	std::cout << "\n";
	std::cout << "Click enter again to terminate program" << "\n";
		
	std::cin.get();
	std::cin.get();
	return 0;
}	