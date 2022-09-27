#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	bool a = true;
	
	cout<<"Year:";
	int year;
	cin>>year;
	
	if(year % 4 != 0 || year % 100 == 0 && year % 400 != 0){
		a=false;
	}
	
	if(a){
		cout<<"¶|";
	}
	else{
		cout<<"¥­";
	}
	
	return 0;
}
