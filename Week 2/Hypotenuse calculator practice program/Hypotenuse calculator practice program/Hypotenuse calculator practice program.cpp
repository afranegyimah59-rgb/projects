// Hypotenuse calculator practice program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double A;
    double B;
    double C;
    std::cout << "Enter length of side A:\n";
    std::cin >> A;
    std::cout << "Enter length of side B:\n";
    std::cin >> B;
    A = pow(A, 2);
    B = pow(B, 2);
    C = sqrt(A + B);
    std::cout << "The length of the Hypotenuse is :" << C << std::endl;

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





