#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string a;
	int i, j;
	bool Y;
	
	while(getline(cin,a)){
		Y = true;
		
		for(i = 0, j = a.size()-1;i <= j; i++, j--){
			if(a[i] != a[j]){
				Y = false;
				break;
			}
		}
		
		if(Y){
			cout << "is Palindrome." << endl;
		}else{
			cout << "isn't' Palindrome." << endl;
		}
	}
		
	return 0;
}
