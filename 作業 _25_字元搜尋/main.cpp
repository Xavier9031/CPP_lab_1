#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char c;
	int n = 0;
	int d[200] = {0};
	
	cout << " =========== Build =========== \n";
	while(cin >> c){
		if(c == 24)
			break;
		d[int(c)] = n++;
	}
	cout << " =========== Search =========== \n";
	while(cin >> c){
		if(c == 24)
			break;
		cout << "index = " << d[int(c)] << endl;
	}
	
	return 0;
}
