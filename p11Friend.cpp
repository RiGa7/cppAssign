#include<iostream>
using namespace std;

class B;

class A{
    int a;
    public:
        A(int a){
            this->a = a;
        }
        friend int sumObjects(A n1, B n2);

};
class B{
    int b;
    public:
        B(int b){
            this->b =b;
        }
    friend int sumObjects(A n1, B n2);
};

int sumObjects(A n1, B n2){
    return n1.a + n2.b;
}

int main() {
    
    A Aobj(143);
    B Bobj(289);
    
    cout<<"Sum : "<<sumObjects(Aobj, Bobj)<<endl;

    return 0;
}