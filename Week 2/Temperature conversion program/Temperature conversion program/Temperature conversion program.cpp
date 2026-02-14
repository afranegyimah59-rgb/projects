// Temperature conversion program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double temp;
    char unit;

    std::cout << "Temperature Conversion\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsuis\n";
    std::cout << "What unit would you like to  convert to:";
    std::cin >> unit;
    if (unit == 'F' || unit == 'f') {
        std::cout << "Enter temperature in Celsuis:";
        std::cin >> temp;
        temp = ((9 / 5) * temp) + 32;
        std::cout << "Temperature is:" << temp << "F\n";
    }
    else if (unit == 'C' || unit == 'c') {
        std::cout << "Enter temperature in Fahrenheit:";
        std::cin >> temp;

        temp = (5 * (temp - 32)) / 9;
        std::cout << "Temperature is:" << temp << "C\n";
    }
    else {
        std::cout << "Please enter either C or F\n";
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
