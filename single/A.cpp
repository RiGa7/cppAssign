#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id, salary;

public:
    Employee(string n, int i, int s) {
        name = n;
        id = i;
        salary = s;
    }

    void display() {
        cout << "Name: " << name << "\nID: " << id << "\nSalary: " << salary << endl;
    }
};

class Manager : public Employee {
    int bonus;

public:
    Manager(string n, int i, int s, int b) : Employee(n, i, s) {
        bonus = b;
    }

    void display() {
        Employee::display();
        cout << "Bonus: " << bonus << "\nTotal Salary: " << salary + bonus << endl;
    }
};

int main() {
    Manager m("Rishika", 101, 50000, 10000);
    m.display();
    return 0;
}
