#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float rad ;
  const float pi = 3.14159;
  
  cout<<"Enter radius:";
  cin>>rad;
  
  double area = pi * rad * rad;
  double circum = 2*pi*rad;
  
  cout << "Area of the circle is: "  << fixed <<setprecision (2)<<area << endl;  
  cout << "Circumfrence of the circle is: "  << fixed <<setprecision (2)  << circum << endl;  
  
}

