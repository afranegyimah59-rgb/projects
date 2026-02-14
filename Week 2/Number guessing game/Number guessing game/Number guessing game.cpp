// Number guessing game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int num;
    int guess;
    int tries = 0;
    
    srand(time(0));
    num = (rand() % 50) + 1;

    std::cout << "WELCOME TO THE NUMBER GUESSING GAME\n";
    do {
        std::cout << "Guess a number between (1-50):";
        std::cin >> guess;
        tries++;

        if (guess > num) {
            std::cout << "Too high\n";
        }
        else if (guess < num) {
            std::cout << "Too low\n";
        }
        else {
            std::cout << "CORRECT! # of tries:" << tries << '\n';
        }
    } while (guess != num);




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
