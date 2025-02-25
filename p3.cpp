#include <iostream>

using namespace std;

int main() {
  
  int num;
  
  cout<<"Enter number "<<endl;
  cin>>num;
  
  if(num>=0){
  	if(num == 2 || num==3 || num==5 || num ==7){
  		cout<<num<<" is a prime number ";
  	}else if(num %2 == 0 || num%3 == 0 || num%5 == 0 || num%7 == 0){
  		cout<<num<<" isn't a prime number";
	}else{
		cout<<num<<" is a prime number ";
	}}else{
		
		cout<<num<< " isn't a prime number ";
	}
	
	return 0;	

}

