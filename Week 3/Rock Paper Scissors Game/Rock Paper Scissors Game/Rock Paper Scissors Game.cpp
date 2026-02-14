// Rock Paper Scissors Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include <ctime>


int main()
{
    int userChoice, computerChoice;
    srand(time(0));
    std::cout << " WELCOME TO ROCK PAPER SCISSORS GAME \n";
    std::cout << "1.Rock\n";
    std::cout << "2.Paper\n";
    std::cout << "3.Scissors\n";
    std::cout << "Enter your choice (1-3):";
    std::cin >> userChoice;
    computerChoice = (rand() % 3) + 1;
    std::cout << "\n You choose:";
    switch (userChoice) {
    case 1:
        std::cout << "Rock\n";
        break;
        std::cout << "Paper\n";
        break;
        std::cout << "Scissors\n";
        break;
    default:
        std::cout << "Invalid Choice";
        return 0;
    }
    switch (computerChoice) {
    case 1:
        std::cout << "Rock\n";
        break;
        std::cout << "Paper\n";
        break;
        std::cout << "Scissors\n";
        break;
    }

    std::cout << "\n\nResult:";
    int result = userChoice * 10 + computerChoice;
    switch (result) {
    case 11:
    case 22:
    case 33:
        std::cout << "It is a Tie!";
        break;
    case 13:
    case 21:
    case 32:
        std::cout << "You Win!";
        break;
    case 12:
    case 23:
    case 31:
        std::cout << "Computer Wins!";
        break;
    }
    std::cout << "\n\nThank you for playing the Game!";
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
