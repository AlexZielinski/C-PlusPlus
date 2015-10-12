#include <iostream>

int main ()
{
	int num = 2;
	int num2 = 4;
	
	int array [2] = { (num + num2), (num - num2) };
	
	std::cout << "Address1:" << *array << "\n";
	std::cout << "Address2:" << *(array+1) << "\n";
	
	
	std::cin.get();
	return 0;
}