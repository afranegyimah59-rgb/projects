// Quiz game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	std::string questions[] = { "What year was C++ created?:",
		"2. Who invented C++?:",
		"3. What is the predecessor of C++?:",
		"4. Is earth flat?" };

	std::string options[][4] = { {"A. 1969","B. 1975","C. 1985","D. 1989"},
		{"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
		{"A. C", "B. C++", "C. C--", "D. B++"},
		{"A. yes", "B. no", "C. sometimes", "D. what's Earth?"} };


	char answerKey[] = { 'C', 'B', 'A', 'D' };
	int size = sizeof(questions) / sizeof(questions[0]);
	char guess;
	int score=0;

	for (int i = 0; i < size; i++) {
		std::cout << "*************************\n";
		std::cout << questions[i] << '\n';
		std::cout << "*****************\n";

		for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++) {
			std::cout << options[i][j] << '\n';
		}

		std::cin >> guess;
		guess = toupper(guess);

		if (guess == answerKey[i]) {
			std::cout << "CORRECT\n";
			score++;
		}
		else {
			std::cout << "WRONG!\n";
			std::cout << "Answer:" << answerKey[i] << '\n';
		}
	}
				return 0;
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
