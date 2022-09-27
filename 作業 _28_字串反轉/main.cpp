#include <iostream>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void reverse(string &str, int length);

int main(int argc, char** argv) {
	
	string a ;
	while(getline(cin,a)){
		reverse(a, a.size()-1);
		cout << endl;
	}
	return 0;
}

void reverse(string &str, int length){
	if(length >= 0){
		cout << str[length];
		return(reverse(str, length-1));
	}
}
