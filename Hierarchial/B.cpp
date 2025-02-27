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

class Student : virtual public Person {
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

class Teacher : virtual public Person {
protected:
    int teacherID;
    string subject;

public:
    Teacher(string n, int a, int tID, string sub) : Person(n, a) {
        teacherID = tID;
        subject = sub;
    }

    void displayTeacher() {
        displayPerson();
        cout << "Teacher ID: " << teacherID << endl;
        cout << "Subject: " << subject << endl;
    }
};

class TeachingAssistant : public Student, public Teacher {
public:
    TeachingAssistant(string n, int a, int r, string c, int tID, string sub)
        : Person(n, a), Student(n, a, r, c), Teacher(n, a, tID, sub) {}

    void displayTA() {
        displayPerson();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
        cout << "Teacher ID: " << teacherID << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    TeachingAssistant ta("Rishika", 25, 101, "MCA", 5001, "DBMS");

    cout << "Teaching Assistant Details:" << endl;
    ta.displayTA();

    return 0;
}
