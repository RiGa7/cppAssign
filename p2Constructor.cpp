#include <iostream>
#include <string>

using namespace std;

class Car
{

    string brand;
    string model;
    int year;

public:
    Car(string brand, string model, int year){

        this->brand = brand;
        this->model = model;
        this->year = year;
    }

    string getbrand(){
        return this->brand;
    }
    string getmodel(){
        return this->model;
    }
    int getyear(){
        return this->year;
    }

    ~Car(){
        cout<<"Destructor called"<<endl;
    }

}car1("Ford", "mustand",2019);

    int main(){
        Car car("chervolet", "uva",2018);
        cout << "brand : " << car.getbrand() << endl;
        cout << "model : " << car.getmodel() << endl;
        cout << "year  : " << car.getyear()  << endl;
        
        cout << "brand : " << car1.getbrand() << endl;
        cout << "model : " << car1.getmodel() << endl;
        cout << "year  : " << car1.getyear()  << endl;
        
        {
            Car car2("maruti", "swift",2022);    
            cout << "brand : " << car2.getbrand() << endl;
            cout << "model : " << car2.getmodel() << endl;
            cout << "year  : " << car2.getyear()  << endl;
        }
    }