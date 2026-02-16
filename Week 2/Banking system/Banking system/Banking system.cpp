#include <iostream>
using namespace std;

int main() {
    double balance = 0;
    int choice;
    double amount;

    do {
        cout << "\n--- WELCOME TO GHANA COMMERCIAL BANK ---\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter amount: ";
            cin >> amount;
            balance += amount;
            cout << "Deposited successfully!\n";
            break;

        case 2:
            cout << "Enter amount: ";
            cin >> amount;
            if (amount > balance)
                cout << "Insufficient balance!\n";
            else {
                balance -= amount;
                cout << "Withdraw successful!\n";
            }
            break;

        case 3:
            cout << "Current balance: " << balance << endl;
            break;

        case 4:
            cout << "THAKS FOR VISITING GHANA COMMERCIAL BANK!\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}