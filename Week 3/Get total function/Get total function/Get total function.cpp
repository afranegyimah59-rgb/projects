// Get total function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double getTotal(double prices[]);

int main()
{


	double prices[] = { 49.99, 15.05, 75, 9.99 };
	double total = getTotal(prices);

	std::cout << "$" << total;
	return 0;
}
double getTotal(double prices[]) {
	double total = 0;

	for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++) {
		total += prices[i];
	}
	return total;
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
