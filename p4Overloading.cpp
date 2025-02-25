#include <iostream>
#include <string>

using namespace std;

class MathOperations{

    public:
    int add(int a, int b){
        return a + b;
    }
    double add(double a, double b){
        return a + b;
    }
    string add(string s1, string s2){
        return s1 + s2;
    }
};

int main(){

    MathOperations op ;

    cout<<op.add(3,3)<<endl;
    cout<<op.add(3.3,3.9)<<endl;
    cout<<op.add("3","3")<<endl;

}