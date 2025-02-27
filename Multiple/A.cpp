#include <iostream>
using namespace std;

class Sports {
protected:
    string sportName;
    int score;

public:
    Sports(string s, int sc) {
        sportName = s;
        score = sc;
    }

    void displaySports() {
        cout << "Sport: " << sportName << endl;
        cout << "Score: " << score << endl;
    }
};

class Academics {
protected:
    string subject;
    int marks;

public:
    Academics(string sub, int m) {
        subject = sub;
        marks = m;
    }

    void displayAcademics() {
        cout << "Subject: " << subject << endl;
        cout << "Marks: " << marks << endl;
    }
};

class StuPerform : public Sports, public Academics {
public:
    StuPerform(string s, int sc, string sub, int m)
        : Sports(s, sc), Academics(sub, m) {}

    void displayPerformance() {
        displaySports();
        displayAcademics();
        cout << "Total Performance Score: " << (score + marks) << endl;
    }
};

int main() {
    StuPerform student("Basketball", 85, "Mathematics", 90);

    cout << "Student Performance Details:" << endl;
    student.displayPerformance();

    return 0;
}
