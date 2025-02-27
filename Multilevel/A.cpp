#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    int rollNumber;
    string course;

public:
    Student(string n, int a, int r, string c) : Person(n, a) {
        rollNumber = r;
        course = c;
    }

    void displayStudent() {
        displayPerson();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
    }
};

class GraduateStudent : public Student {
    string thesisTitle;

public:
    GraduateStudent(string n, int a, int r, string c, string t) : Student(n, a, r, c) {
        thesisTitle = t;
    }

    void displayGraduateStudent() {
        displayStudent();
        cout << "Thesis Title: " << thesisTitle << endl;
    }
};

int main() {
    GraduateStudent gs("Rishika", 24, 101, "Computer Science", "AI in ");

    cout << endl << "Graduate Student Details:" << endl;
    gs.displayGraduateStudent();

    return 0;
}
