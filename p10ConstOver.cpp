#include<iostream>
using namespace std;

class Person {
    string name;
    int age;

    public:
        Person(){
            name = "Unkown";
            age = -1; 
        }
        Person(string name){
            this->name = name;
            age= -1;
        }
        Person(string name, int age ){
            this->age = age;
            this->name = name;
        }
        void display(){
            cout<<"Name : "<<name<<endl<<"Age  : "<<age<<endl;
        }
};

int main() {
    Person p1;
    Person p2("Nikki");
    Person p3("Rishika",21);
    p1.display();
    p2.display();
    p3.display();
    return 0;
}