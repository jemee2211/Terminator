// a password cannot be validate if it doesn’t contains an uppercase letter

#include<iostream>
#include<string.h>
using namespace std;

main(){
	
	char a[20];
	char i;
	char error[] = "Password Cannot Be Validate";
	
	cout<<"Enter Password:";
	cin>>a;
	
	try{
		
	
		
	if(a[20] =='A'||'B'||'C'||'D'||'E'||'F'||'G'||'H'||'I'||'J'||'K'||'L'||'M'||'N'||'O'||'P'||'Q'||'R'||'S'||'T'||'U'||'V'||'W'||'X'||'Y'||'Z'){
		
		
		
			cout<<"Password Is Right"<<endl;
	
		}
		
		
	else{
		
		throw error;
	}
	
			
	}
	catch( char a[]){
		
		cout<<a<<endl;
	}
}
