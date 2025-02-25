#include <iostream>

using namespace std;

int main() {
	
	int arr[100][100],n;
	
	cout<<"Enter n : ";
	cin>>n;
	
	int h =n/2;
	
	for(int i=0; i<h+1; +i++){
		for(int j=0; j<n; j++){
			if(h==j)
				cout<<" * ";
			else if(h-i <= j)
				cout<<" * ";
			else if(h+i <= j)
				cout<<" * ";
			else
				cout<<" - ";
		}
		cout<<endl;
	}
	
	
	return 0;	

}

