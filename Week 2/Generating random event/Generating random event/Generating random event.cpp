// Generating random event.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));
    std::cout << "CASH PRICE ($) GIVE AWAY\n";
    int randNum = rand() % 5 + 1;
    switch (randNum) {
    case 1:
        std::cout << "You win a cash price of $2000\n";
        break;
    case 2:
        std::cout << "You win a cash price of $1000000\n";
        break;
    case 3:
        std::cout << "You win a cash price of $10\n";
        break;
    case 4:
        std::cout << "You win a cash price of $50000\n";
        break;
    case 5:
        std::cout << "You win a cash price of $100\n";
        break;
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
