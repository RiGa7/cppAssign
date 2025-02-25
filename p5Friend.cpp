#include <iostream>
#include <string>

using namespace std;

class Rectangle{
    
    float length;
    float width;

    public:
        Rectangle(float l, float w){
            length = l;
            width = w;
        }

    friend double CalculateArea(Rectangle& obj);
};

double CalculateArea(Rectangle & obj){
    return obj.length * obj.width;
}

int main(){

    Rectangle o1(3,5);

    cout<<"Area of Rectangle " <<CalculateArea(o1);
}