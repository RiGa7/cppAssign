#include<iostream>
using namespace std;

class Counter{
    int value;
    public:
        Counter (int val){
            value = val;
        }

        Counter operator++ (){
            ++value;
            return *this;// it will return the actual object
        }      

        Counter operator++(int){//`int` parameter differentiates postfix
            value++;
            return *this;
        }

        void display(){
            cout<<"Value of counter"<< " is "<< value<<endl;
        }
};

int main() {
    Counter c1(0);    
    cout<<"Actual value"<<endl;
    c1.display();
    cout<<"After Post Increment"<<endl;
    c1++;
    c1.display();
    cout<<"After Pre Increment"<<endl;
    ++c1;
    c1.display();
    return 0;
}