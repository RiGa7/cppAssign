#include <iostream>
#include <string>

using namespace std;

class student{
    
    string name;      
    int age;
    char grade;

    public:
        void setName(string brand){
            this->name = brand;
        }
        void setAge(int age){
            this->age=age;
        }
        void setGrade(char grade){
            this->grade = grade;
        }
        string getName(){
            return this->name;
        }
        int getAge(){
            return this->age;
        }
        char getGrade(){
            return this->grade;
        }
};

int main(){
    student s;
    s.setName("Rishika");
    s.setAge(21);
    s.setGrade('A');
    cout<<"Name : "<<s.getName()<<endl;
    cout<<"Age : "<<s.getAge()<<endl;
    cout<<"Grade : "<<s.getGrade();
}