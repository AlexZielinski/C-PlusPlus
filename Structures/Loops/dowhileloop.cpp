#include <iostream>

int main()
{
	unsigned long n;
	do  {
		std::cout << "Enter a number (0 to end):  ";
		std::cin >> n;
		std::cout << "You entered:  " << n << "\n";
	} while (n != 0);
	
	std::cin.get();
	std::cin.get();
	return 0;
}