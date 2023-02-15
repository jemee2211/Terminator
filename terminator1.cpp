// - a number cannot be divide by zero

#include<iostream>

using namespace std;

main(){
	
	int x;
	int y;
	int z;
	char error[] = "Cannot Divisible By 0";
	
	cout<<"Enter X:";
	cin>>x;
	
	cout<<"Enter Y:";
	cin>>y;
	
	try{
	
	if(x != 0 && y != 0){
		
		z=x/y;
		
		cout<<"Z = "<<z<<endl;
		
	}
	else{
		
		throw error;
		
	}
	
	}
	
	catch (char a[]){
		
		cout<<a;
	}
}
