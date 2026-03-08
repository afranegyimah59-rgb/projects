// Fill an array with users input.cpp
#include <iostream>
#include <string>
int main()
{
    std::string foods[5];
    int size = sizeof(foods) / sizeof(foods[0]);
    std::string temp;

    for (int i = 0; i < size; i++) {
        std::cout << "Enter in food you like or 'q' to quit #" << i + 1 << ": ";
        std::getline(std::cin, temp);
        if (temp == "q") {
            break;
        }
        else {
            foods[i] = temp;
        }
    }

    std::cout << "You like the following food:\n";

    for (int i = 0; !foods[i].empty(); i++) {
        std::cout << foods[i] << '\n';
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
