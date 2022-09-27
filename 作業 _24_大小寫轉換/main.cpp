#include <iostream>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	string a;
	while(getline(cin,a)){
		cout << "Input: " << a << endl;
		
		if(int(a[0]) > 96 && int(a[0]) < 123){
				a[0] = char(int(a[0]) - 32);
			}
			
		for(int i = 0; i < a.size(); i++){
			if(int(a[i]) == 32 && int(a[i+1]) > 96 && int(a[i+1]) < 123){
				a[i+1] = char(int(a[i+1]) - 32);
			}
		}
		
		cout << "Output: " << a << endl;
	}
	
	return 0;
}
