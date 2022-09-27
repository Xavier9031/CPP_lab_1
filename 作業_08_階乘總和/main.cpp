#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	int temp = 1;
	int s = 0, n;
	cout << "N: ";
	cin >> n;
	
	for(int i = 1; i <= n;i++){
		temp *= i;
		s += temp;
	}
	
	cout << "1! + 2! + ... + N! = " << s << endl;
	
	return 0;
}
