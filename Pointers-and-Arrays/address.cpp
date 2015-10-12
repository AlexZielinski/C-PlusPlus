#include <iostream>

int main()
{
	int variable1;
	int variable2;
	
	std::cout << "Address of variable1:";
	std::cout << &variable1 << "\n";
	
	std::cout << "Address of variable2:";
	std::cout << &variable2 << "\n";

	std::cin.get();
	return 0;
}