#include <iostream>
using namespace std;

int main() {
	
	int arr[100][100],r,c;
	
	cout<<"Enter number of rows : ";
	cin>>r;
	cout<<"Enter number of columns : ";
	cin>>c;
	
	cout<<"Enter the elements : ";
	for(int i=0; i<r; +i++){
		for(int j=0; j<c; j++){
			cin>>arr[i][j];	
		}
	}
	
	
	for(int i=0; i<r; +i++){
		for(int j=0; j<c; j++){
			cout<<arr[i][j]<<" ";	
		}
		cout<<endl;
	}
	
	cout<<"Transpose : "<<endl;
	
	for(int i=0; i<c; +i++){
		for(int j=0; j<r; j++){
			cout<<arr[j][i]<<" ";	
		}
		cout<<endl;
	}
	return 0;	

}

