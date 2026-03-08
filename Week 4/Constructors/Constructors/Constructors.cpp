// Constructors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Car {
public:
    std::string make;
    std::string model;
    int year;
    std::string color;

    Car(std::string make, std::string model, int year, std::string color) {
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};

int main() {

    //constructor =  special method that is automatically called when an object is instantiated
    //                      useful for assigning values to attributes as arguments

    Car car1("Chevy", "Corvette", 2022, "blue");
    Car car2("Ford", "Mustang", 2023, "red");

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

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
