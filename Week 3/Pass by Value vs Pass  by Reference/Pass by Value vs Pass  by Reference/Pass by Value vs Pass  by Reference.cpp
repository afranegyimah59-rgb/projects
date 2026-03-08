// Pass by Value vs Pass  by Reference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void swap(std::string& x, std::string& y);

int main()
{
	std::string x = "Kool-Aid";
	std::string y = "Water";

	swap(x, y);

	std::cout << "X: " << x << '\n';
	std::cout << "Y: " << y << '\n';

	return 0;
}
void swap(std::string& x, std::string& y) {
	std::string temp;
	temp = x;
	x = y;
	y = temp;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
