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

    int studentID; 

    string course; 

 

public: 

    Student(string n, int a, int id, string c) : Person(n, a) { 

        studentID = id; 

        course = c; 

    } 

 

    void displayStudent() { 

        displayPerson(); 

        cout << "Student ID: " << studentID << endl; 

        cout << "Course: " << course << endl; 

    } 

}; 

 

class Teacher : public Person { 

    int teacherID; 

    string subject; 

 

public: 

    Teacher(string n, int a, int id, string s) : Person(n, a) { 

        teacherID = id; 

        subject = s; 

    } 

 

    void displayTeacher() { 

        displayPerson(); 

        cout << "Teacher ID: " << teacherID << endl; 

        cout << "Subject: " << subject << endl; 

    } 

}; 

 

int main() { 

    Student s("Rishika", 20, 101, "Computer Science"); 

    Teacher t("Prof. Balwinder Kaur", 38, 5001, "C++"); 

 

    cout << endl << "Student Details:" << endl; 

    s.displayStudent(); 

 

    cout << endl << "Teacher Details:" << endl; 

    t.displayTeacher(); 

 

    return 0; 

} 
