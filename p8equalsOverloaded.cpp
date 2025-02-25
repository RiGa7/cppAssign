#include<iostream>

using namespace std;
class Point{
    int x, y;

    public:
        Point(int x,int y){
            this->x = x;
            this->y = y;
        }

        bool operator==(Point&other){
            return  (x ==other.x &&y==other.y);
        }
};

int main(){
    Point p1(1,2);
    Point p2(1,2);

    Point p3(3,4);

    if(p1 == p2)
        cout<<"p1 and p2 are equal"<<endl;
    else
        cout<<"p1 and p2 are not equal"<<endl;

    if(p1 == p3)
        cout<<"p1 and p3 are equal"<<endl;
    else
        cout<<"p1 and p3 are not equal"<<endl;
}