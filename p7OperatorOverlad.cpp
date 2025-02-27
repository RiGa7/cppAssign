#include<iostream>

using namespace std;
class Complex{
    int r, i;

    public:
        Complex(float r,int i){
            this->r =r;
            this->i = i;
        }   

        Complex operator+(Complex c){
            return Complex(r+c.r , i+c.i);// r is of c1 and c.r is of c2
        }

        void display(){
            cout<<r<<"+"<<i<<"j"<<endl;
        }
};

int main(){
    Complex c1(1,2);
    Complex c2(3,4);
    Complex c3(4,4);

    c1.display();
    c2.display();
    Complex res = c1+c2;// c1.add(c2)- so here c1 is the object which is invoking add fucntion with c2 as an argument 
    
    cout<<"-----"<<endl;
    res.display();
    cout<<"-----"<<endl<<endl;

    c1.display();
    c2.display();
    c3.display();
    res = c1+c2+c3;
    cout<<"-----"<<endl;
    res.display();
    cout<<"-----"<<endl<<endl;
}