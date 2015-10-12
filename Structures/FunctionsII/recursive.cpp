#include <iostream>

long factorial (long a)
{
	if (a > 1)
		return a*factorial (a-1);
	else
		return 1;
}

int main()
{
	int n;
	do {
		long number;
	
		std::cout << "Enter a number:	>";
		std::cin >> number;
		std::cout << "\n";
		std::cout << number << "! =" << factorial (number)<< "\n";
		std::cout << "\n";
	} while (n !=0);
	std::cin.get();
	std::cin.get();
	return 0;
}	