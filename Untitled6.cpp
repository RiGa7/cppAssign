#include <iostream>
using namespace std;

int main() {
	
	int (*addPtr)(int,int);
	
	cout<<"Sum is : "<<addPtr(50,32);
	
	return 0;	

}

int add(int a, int b){
	return a+b;
}

