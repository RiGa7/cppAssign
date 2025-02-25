#include<iostream>

using namespace std;
class Complex{
    int r, i;

    public:
        Complex(float r,int i){
            this->r =r;
            this->i = i;
        }   

        Complex operator+(Complex&other){
            return Complex(r+other.r , i+other.i);
        }

        void display(){
            cout<<r<<"+"<<i<<"j";
        }
};

int main(){
    Complex p1(1,2);
    Complex p2(3,4);

    Complex res = p1+p2;
    res.display();
}