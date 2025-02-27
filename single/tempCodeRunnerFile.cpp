#include <iostream>
using namespace std;

class BankAccount {
protected:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum, double bal) {
        accountNumber = accNum;
        balance = bal;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    void displayBalance() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public BankAccount {
    double interestRate;

public:
    SavingsAccount(int accNum, double bal, double rate) : BankAccount(accNum, bal) {
        interestRate = rate;
    }

    void calculateInterest() {
        double interest = balance * (interestRate / 100);
        cout << "Interest Earned: " << interest << endl;
        balance += interest;
    }
};

int main() {
    SavingsAccount myAccount(12345, 5000, 5.0);

    cout << endl << "Initial Account Details:" << endl;
    myAccount.displayBalance();

    myAccount.deposit(2000);
    myAccount.withdraw(1000);
    myAccount.calculateInterest();

    cout << endl << "Final Account Details:" << endl;
    myAccount.displayBalance();

    return 0;
}
