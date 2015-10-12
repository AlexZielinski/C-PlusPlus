#include <iostream>

int main()
{
	int balance [5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
	int *p;
	
	p = balance;
	
	
	std::cout << "Array values using pointer:" << "\n";
	for (int i=0; i<5; i++);
	std::cout << "*(p+" << i << "):";
	std::cout << *(p+i) << "\n";
	
	std::cout << "Array values using balance as address:" << "\n";
	for (int i=0; i<5; i++);
	std::cout << "*(balance+" << i << "):";
	std::cout << *(balance+1) << "\n";
	






	std::cin.get();
	return 0;

}