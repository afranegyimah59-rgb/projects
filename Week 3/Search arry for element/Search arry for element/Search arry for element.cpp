// Search arry for element.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int searchArray(int array[], int size, int element);

int main()
{
	int numbers[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(numbers) / sizeof(numbers[0]);
	int index;
	int myNum;

	std::cout << "Enter element to search for:"<<'\n';
	std::cin >> myNum;

	index = searchArray(numbers, size, myNum);
	if (index != -1) {
		std::cout << myNum << "is at index" << index;
	}
	else {
		std::cout << myNum << "is not in the array";
	}

	return 0;
}
int searchArray(int array[], int size, int element) {

	for (int i = 0; i < size; i++) {
	
		if(array[i]== element) {
			return i;


		}
	}
	return -1;
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
