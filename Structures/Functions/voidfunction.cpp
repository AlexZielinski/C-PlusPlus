# include <iostream>

void printmessege () // also == void printmessege (void) including void
 //-------------------  in the () specifys that no parameters are need.
{
	std::cout << "This is a void function, it has no data type.\n";
}
int main ()
{
	printmessege ();
	std::cin.get();
	std::cin.get();
	return 0;
}	