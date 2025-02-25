#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
  
  int a, b, c, d, e;
  
  cout<<"Enter the values for a b c d and e"<<endl;
  cin>>a>>b>>c>>d>>e;
  
  cout<<"Result is : "<<pow((a+b*c-d/e), 2);
}

