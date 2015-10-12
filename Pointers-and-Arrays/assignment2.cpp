#include <iostream>
int main()
{
	int num = 0;
	int num2 = 0;
	
	std::cout << "enter a number:";
	std::cin >> num;
	
	std::cout << "\n";
	
	std::cout << "enter second number:";
	std::cin >> num2;
	
	std::cout << "\n";
	
	std::cout << "-----------------------------------" << "\n";
	
	std::cout << ":Mathematical operations:" << "\n";
	std::cout << "\n";

	std::cout << "Added:" << num + num2 << "\n";
	std::cout << "Subtracted:" << num - num2 << "\n";
	std::cout << "Divided:" << num / num2 << "\n";
	std::cout << "Multiplied:" << num * num2 << "\n";
	std::cout << "Modded:" << num % num2 << "\n";
	
	std::cout << "\n";
	
	int operations [5] = { (num + num2), (num - num2), (num / num2), (num * num2), (num % num2) };
	
	std::cout << "-----------------------------------" << "\n";
	
	std::cout << ":The array of operations:" << "\n";	
	std::cout << "\n";
	
	std::cout << "Added:" << *(operations + 0) << "\n";
	std::cout << "Subtracted:" << *(operations + 1) << "\n";
	std::cout << "Divided:" << *(operations + 2) << "\n";
	std::cout << "Multiplied:" << *(operations + 3) << "\n";
	std::cout << "Modded:" << *(operations + 4) << "\n";
	
	std::cout << "\n";
	
	std::cout << "-----------------------------------" << "\n";
	
	std::cout << ":Addresses of arrays:" << "\n";
	std::cout << "\n";
	
	std::cout << "Address for adding:" << &operations[0] << "\n";
	std::cout << "Address for subtracting:" << &operations[1] << "\n";
	std::cout << "Address for dividing:" << &operations[2] << "\n";
	std::cout << "Address for multiplying" << &operations[3] << "\n";
	std::cout << "Address for modding" << &operations[4] << "\n";
		
	
	std::cin.get();
	std::cin.get();
	return 0;
}