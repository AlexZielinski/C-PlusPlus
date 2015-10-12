#include <iostream>

int operate (int a, int b)
{
	return a*b;
}

float operate (float a, float b)
{
	return a/b;
}

int main()
{
	int x=5, y=2;
	float n=5.0, m=2.0;
	
	std::cout << "Function 1:	>" << operate (x,y) << "\n";
	std::cout << "\n";
	std::cout << "Function 2:	>" << operate (n,m) << "\n";
	
	std::cin.get();
	std::cin.get();
	return 0;
}
	