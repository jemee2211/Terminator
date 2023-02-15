//a person cannot be able to vote if his/her age is less than 18

#include<iostream>

using namespace std;

main(){
	
	int age;
	
	char error[] = "You Are Not Eligible For Voting";
	
	cout<<"Enter Age:";
	cin>>age;
	
	try{
		
		if(age >= 18){
			
			cout<<"You Are Eligible For Voting"<<endl;
		}
		
	else{
		
		throw error;
	}	
	}
    catch(char a[]){
    	
    	cout<<a;
	}	
	
	
}
