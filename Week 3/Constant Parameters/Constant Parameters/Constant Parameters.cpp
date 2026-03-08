// Constant Parameters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void printInfo(const std::string& name, const int& age);
int main()
{
    // const parameter = parameter that is effectively read-only
    //                                  conveys intent & code is more secure
    //                                  useful for pointers and references

    std::string name = "Bro";
    int age = 21;

    printInfo(name, age);

    return 0;
}
void printInfo(const std::string& name, const int& age) {
    //name = "";
    //age = 0;
    std::cout << name << '\n';
    std::cout << age << '\n';
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
