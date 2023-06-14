#include <iostream>
using namespace std;

//rules of Gregorian calender 
//if year is divisible by 4 then year is leap 
//if year is divisible by 4 and 100 then year is not leap

//if year is divisble by both 4 and 100 and also divisible by 400 
//then year is also leap

bool isLeap(int year){
if(year % 4 != 0){
	return false;
}	

else if(year % 100 != 0){
	return true;
}

else if (year % 400 != 0){
	return false;
}
else{
	return true;
}
}

int main(){
	int year;
	while(true){
		int choice;
	cout<<"Enter 1 for enter year or 0 for exit ";
	cin>>choice;
	if(choice==1){
	
	cout<<"Enter year: ";
	cin>>year;
	
	if(isLeap(year)){
		cout<<year<<" is a leap year."<<endl;
		
	}
	else {
		cout<<year<<" is not a leap year."<<endl;
	}
}//condition 1
else if(choice==0){
	exit(0);
}//condition 0
}//while
}//main
