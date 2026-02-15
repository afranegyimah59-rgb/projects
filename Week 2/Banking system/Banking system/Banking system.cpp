// Banking system.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double balance = 0;
    int choice;
    double amount;
    do {
        std::cout << "\n**********WELCOME TO GHANA COMMERCIAL BANK*********\n";
        std::cout << "1.Deposit\n";
        std::cout << "2.Withdraw\n";
        std::cout << "3.Check Balance\n";
        std::cout << "4.Exit\n";
        std::cout << "Enter choice:\n";
        std::cin >> choice;
        switch (choice) {
        case 1:
            std::cout << "Enter amount :";
            std::cin >> amount;
            balance = balance + amount;
            std::cout << "Deposited Successfully\n";
            break;
        case 2:
            std::cout << "Enter amount:";
            std::cin >> amount;
            if (amount > balance)
                std::cout << "Insuficient balance!\n";
            else if (amount < 0)
                std::cout << "Input a valid amount\n";
            else {
                balance = balance - amount;
                std::cout << "Withdraw Successful!\n";
            }
            break;
        case 3:
            std::cout << "Current balance:" << balance << '\n';
            break;
        case 4:
            std::cout << "THANKS FOR VISITING GHANA COMMERCIAL BANK\n";
            break;
        default:
            std::cout << "Invalid choice";
        }

    } while (choice != 4);
   
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
