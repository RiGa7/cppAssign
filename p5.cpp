#include <iostream>
using namespace std;

int main() {
	
	int arr[100], n,sum=0, mul=1;
	
	cout<<"Enter the number of elements of array : ";
	cin>>n;
	
	cout<<"Enter the elements : ";
	for(int i=0; i<n; +i++){
		cin>>arr[i];
	}
	
	for(int i=0; i<n; +i++){
		if(arr[i]>=0){
			if(arr[i]%2 == 0){
				sum+=arr[i];
			}else{
				mul*=arr[i];
			}
		}else{
			cout<<"Number "<<arr[i]<<" is -ve number.";
		}
	}
	
	cout<<"Sum of even numbers is : "<<sum<<endl;
	cout<<"Multiplication of odd numbers is : "<<mul<<endl;	
	return 0;	

}

