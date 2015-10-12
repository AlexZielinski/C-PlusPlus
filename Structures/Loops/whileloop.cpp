#include <iostream>

int main()
{
	int n;
	std::cout << "Enter a number   >";
	std::cin >> n;
	
		while ( n>0 )
		{
			std::cout << n << ","; --n;
		}	
	std::cout << "(FIRE!)\n";
	std::cin.get();
	std::cin.get();
	return 0;

}