#include <iostream>

int main()
{
	int variable = 20;
	int *p1;
	
	p1 = &variable;
	
	std::cout << "Address stored in p1 variable:";
	std::cout << p1 << "\n";
	
	std::cout << "\n";
	
	std::cout << "Value of *p1 variable:";
	std::cout << *p1 << "\n";

	std::cin.get();
	return 0;
}