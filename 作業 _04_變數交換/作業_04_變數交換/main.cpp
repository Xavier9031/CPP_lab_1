#include <iostream>
using namespace std;

//輸入兩個正整數，使其交換 
int main(int argc, char** argv) {

	int a, b;
	cin >> a >> b;
	
	//交換 
	swap(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("PAUSE");


	return 0;
}
