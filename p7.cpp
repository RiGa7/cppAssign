#include <iostream>
using namespace std;

int main() {
		
	string str;
	int vow=0, con=0,spech=0,digits=0;
		
	cout<<"Enter string : ";
	cin>>str;
		
	for(int i = 0 ; i<str.length(); i++){
		char ch = tolower(str.at(i));
		if(ch>=65 && ch<=122){
			if(ch == 'a'|| ch == 'e' || ch == 'i' || ch =='o' || ch == 'u'){
				vow++;
			}else{
				con++;
			}
		}else if(ch>=48 && ch<=57){
			digits++;
		}else{
			spech++;
		}
	}
	
	cout<<"Vowels are : "<<vow<<endl;
	cout<<"Consonats are : "<<con<<endl;
	cout<<"Digits are : "<<digits<<endl;
	cout<<"Special Characters are : "<<spech<<endl;
	
	return 0;	

}

