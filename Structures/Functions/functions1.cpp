#include <iostream>

int sum (int a, int b)
{
	int r;
	r = a+b;
	return (r);
}	
int main()
{
	int result;
	result = sum (29900, 9909);
	std::cout << "The result is 	>" << result;
	
	std::cin.get();
	std::cin.get();
	return 0;

}



