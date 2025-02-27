#include <iostream>
using namespace std;

int add(int a, int b){
	return a+b;
}

int subtract(int a, int b){
	return a-b;
}

int main() {
	
	int (*addPtr)(int,int);
	int (*subPtr)(int,int);
	int ch,a,b;
	addPtr = add;
	subPtr = subtract;
	do{
	cout<<"\n1 to add \n2 to subract\n3 to exit\n";
	cin>>ch;
	
	if(ch==3)
		return 0;
	
	cout<<"Enter 2 numbers : ";
	cin>>a>>b;
	
	if(ch==1)
		cout<<"Sum is : "<<addPtr(a,b);	
	else if(ch==2)
		cout<<"Difference is : "<<subPtr(a,b);
	else
		cout<<"Enter a valid number.";
	}while(true);
	
	return 0;	

}