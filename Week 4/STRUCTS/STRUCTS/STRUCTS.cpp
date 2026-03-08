// STRUCTS.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

struct student {
    std::string name;
    double gpa;
    bool enrolled = true;
};
int main()
{
    student student1;
    student1.name = "Spongebob";
    student1.gpa = 3.2;

    student student2;
    student2.name = "Patrick";
    student2.gpa = 2.1;

    student student3;
    student3.name = "Squidward";
    student3.gpa = 1.5;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.gpa << '\n';
    std::cout << student3.enrolled << '\n';

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
