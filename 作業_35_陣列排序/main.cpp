#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void sort(int * arr, int n){
	for(int i = 0; i < n ; i++){
		for(int j = 0; j < n; j++){
			if(*(arr+i) < *(arr+j)){
				swap(*(arr+i), *(arr+j));
			}
		}
	}
}

int main(int argc, char** argv) {
	int n;
	while(cin >> n){
		int * arr = new int [n];
		
		for(int i = 0; i < n; i++){
			cin >> *(arr+i);
		}
		
		sort(arr, n);
		
		cout << "stored: ";
		for (int i = 0; i < n; i++)
			cout << *(arr+i) << ' ';
		cout << endl;
		
		delete arr;
	}
	return 0;
}
