#include <iostream>

int subtraction (int a, int b)
{
	int r;
	r = a-b;
	return (r);
}

int main()
{
	int x=10000, y=1231;
	int z=2922, u=28;
	z = subtraction (3032,2012);
	
	std::cout << "Result of first subtraction	>" << z << "\n";
	std::cout << "\n";
	std::cout << "Result of second subtraction	>" << subtraction (3031,2012) << "\n";
	std::cout << "\n";
	std::cout << "Result of third subtraction	>" << subtraction (x,y) << "\n";
	std::cout << "\n";
	std::cout << "Result of fourth subtraction	>" << subtraction (z,u) << "\n";
	std::cout << "\n";
	z =4 +  subtraction ( y,u);
	std::cout << "Result of fifth subtraction	>" << z << "\n";
	std::cin.get();
	std::cin.get();
	return 0;
}	