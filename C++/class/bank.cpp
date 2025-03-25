#include <iostream>
using namespace std;

class bank {
    int accNo;
    string accName;
    double bal = 0;

public:
    void name() {
        cout << "Enter your name: ";
        cin >> accName;
        cout << "Enter your account number: ";
        cin >> accNo;
    }

    void deposite() {
        double amount;
        cout << "Enter the amount to deposit: ";
        cin >> amount;
        bal += amount;
        cout << "Amount deposited successfully!\n";
    }

    void withdraw() {
        double amount;
        cout << "Enter the amount to withdraw: ";
        cin >> amount;
        if (amount <= bal) {
            bal -= amount;
            cout << "Amount withdrawn successfully!\n";
        } else {
            cout << "Insufficient balance!\n";
        }
    }

    void display() {
        cout << "\n--- Account Details ---\n";
        cout << "Account Number: " << accNo << endl;
        cout << "Account Name: " << accName << endl;
        cout << "Balance: " << bal << endl;
    }
};

int main() {
    bank user;
    user.name();
 
    int choice;
    do {
        cout << "\n--- Menu ---\n";
        cout << "1. Deposit\n2. Withdraw\n3. Display Account Details\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            user.deposite();
            break;
        case 2:
            user.withdraw();
            break;
        case 3:
            user.display();
            break;
        case 4:
            cout << "Thank you for using the banking system!\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
