#include <iostream>

float equation (int a, int b, int c)
{
	float X; 
	X = a * (b/c);
	return X;
}	

int main()
{
	float z= 50, h= 200, j=3;
	short p;
	p = equation (10,100,50);
	
	char t= 2, r= 6, y= 3;
	short g;
	g = equation (2,6,3);
	
	std::cout << "Use of z, h, j:	>" << equation (z, h, j) <<	"\n";
	std::cout << "\n";
	std::cout << "Use of short p: >" << p << "\n";
	std::cout << "\n";
	std::cout << "Use of character g:	>" << g << "\n";
	std::cout << "\n";
	std::cout << "Use of equation:	>" << equation (z,h,j) << "\n";
	std::cout << "\n";
	std::cout << "Use of equation:	>" << equation (1,100,50) << "\n";
	std::cout << "\n";
	std::cout << "Use of equation:	>" << 4 + equation (t,r,y) << "\n";
	std::cout << "\n";
	std::cout << "Use of equation:	>" << equation (2,6,3) << "\n";
	
	std::cin.get();
	std::cin.get();
	return 0;
}
	
	
	
	