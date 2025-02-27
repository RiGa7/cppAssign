#include <iostream>
using namespace std;

class Employee {
protected:
    int employeeID;
    double salary;

public:
    Employee(int id, double sal) {
        employeeID = id;
        salary = sal;
    }

    void dispEmployee() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void dispPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Manager : public Employee, public Person {
    string department;

public:
    Manager(int id, double sal, string n, int a, string dept)
        : Employee(id, sal), Person(n, a) {
        department = dept;
    }

    void dispManager() {
        dispPerson();
        dispEmployee();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager mgr(101, 75000, "Rishika", 30, "IT");

    cout << "Manager Details:" << endl;
    mgr.dispManager();

    return 0;
}
