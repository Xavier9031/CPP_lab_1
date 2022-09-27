#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
	
	cout << "N: ";
	int n ;
	cin >> n;
	
	for(int i = n/2; i >= (0 - n/2); i--){
		for(int j = 0; j < abs(i); j++){
			cout << " "; 
		}
		for(int j = 0; j < (n - abs(i)*2); j++){
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}
