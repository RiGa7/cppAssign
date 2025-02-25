#include <iostream>
#include <string>

using namespace std;

class Number{

    public:
    int modifyValue(int val){
        return val++;
    }
    int modifyRef(int& val){
        return val++;
    }
};

int main(){

    Number obj ;
    int n =5; 
    cout<<"By value: "<<endl;
    cout<<obj.modifyValue(n)<<endl;
    cout<<n<<endl;
    cout<<"By reference: "<<endl;
    cout<<obj.modifyRef(n)<<endl;
    cout<<n<<endl;


}