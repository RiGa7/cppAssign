#include <iostream>
using namespace std;

int calculator(int a, int b, char op){
		
	switch(op){
		case '+':
			cout<<"Addition\n";
			return a+b;
		case '-':
			cout<<"Subtraction\n";
			return a-b;
		case '*':
			cout<<"Multiplication\n";
			return a*b;
		case '/':
			cout<<"Division\n";
			return a/b;
		default:
			cout<<"Invalid operation.";
			return -1;
	}
	
	return a+b;
}

int main() {
	
	int ch,a,b;
	char op;
	
	cout<<"Operation (+ - * /) : "	;
	cin>>op;
	cout<<"Enter 2 numbers : ";
	cin>>a>>b;
	int res = calculator(a,b,op);
	if(!res)
		return 0;
		
	cout<<"Result is "<<res;
	

}
