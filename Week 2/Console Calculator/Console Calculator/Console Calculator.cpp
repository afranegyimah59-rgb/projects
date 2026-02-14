// Console Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
   
    std::cout << "Welcome to console calculator!\n";
    std::cout << "Enter first number:\n";
    double num1;
    std::cin >> num1;
    
        char opp;
        std::cout << "Enter opp either +, _, *, \, \n";
        std::cin >> opp;
    
    std::cout<<" number:\n";
    double num;
    std::cin >> num;
    char choice;
   
        switch (opp) {
        case '+':
            num1 += num;
            break;
        case'-':
            num1 -= num;
        case'*':
            num1 *= num;
        case'/':
            if (num != 0)
                num1 /= num;
            else
                std::cout << "Error! Division by zero\n";
            break;
        default:
            std::cout << "Invalid Operation!\n";
        }
        std::cout << "Answer:" << num1 << "\n";
        
      

   
   

    

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
