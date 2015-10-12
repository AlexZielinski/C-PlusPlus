#include <iostream>

void duplicate (int& a, int& b, int& c)
{
	a*=2;
	b*=2;
	c*=2;
}

int main()
{
	int x=3, y=10, z=2;
	duplicate (x,y,z);
	std::cout << "x=" << x << "\n"; 
	std::cout << "y=" << y << "\n";
	std::cout << "z=" << z << "\n";
	std::cin.get();
	std::cin.get();
	return 0;
}