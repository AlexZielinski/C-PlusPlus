#include <iostream>

void prevnext(int x, int& prev, int& next)
{
	prev = x-1;
	next = x+1;
}

int main()
{
	int x=100, y, z;
	prevnext (x,y,z);
	std::cout << "Previous =" << y << "\n";
	std::cout << "\n";
	std::cout << "Next =" << z << "\n";
	
	std::cin.get();
	std::cin.get();
	return 0;
}	