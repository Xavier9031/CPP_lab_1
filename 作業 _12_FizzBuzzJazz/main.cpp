#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a;
	
	while(cin >> a){
		for (int i = 1; i <= a; i++){
			if (i % 3 != 0 && i % 5 != 0 && i % 7 != 0){
				cout << i << ", ";
				continue;
			}
			if(i % 3 == 0){
				cout << "Fizz";
			}
			if(i % 5 == 0){
				cout << "Buzz";
			}
			if(i % 7 == 0){
				cout << "Jazz";
			}
			cout << ", ";
		}		
		cout << endl;
	}
		
		return 0;
}
	

