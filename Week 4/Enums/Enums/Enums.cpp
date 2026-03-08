// Enums.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

enum Day {
    sunday = 0, monday = 1, tuesday = 2, wednesday = 3,
    thursday = 4, friday = 5, saturday = 6
};

int main() {

    //  enums = a user-defined data type that consists 
    //                  of paired named-integer constants.
    //                 GREAT if you have a set of potential options

    Day today = friday;

    switch (today) {
    case sunday:    std::cout << "It is Sunday!\n";
        break;
    case monday:    std::cout << "It is Monday!\n";
        break;
    case tuesday:   std::cout << "It is Tuesday!\n";
        break;
    case wednesday: std::cout << "It is Wednesday!\n";
        break;
    case thursday:  std::cout << "It is Thursday!\n";
        break;
    case friday:    std::cout << "It is Friday!\n";
        break;
    case saturday:  std::cout << "It is Saturday!\n";
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
