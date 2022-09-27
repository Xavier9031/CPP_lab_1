#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[20];

int main(int argc, char** argv) {
	int d, n = 0;
	while (cin >> d){
		a[n++] = d;
	}
	
	for(int i = 0; i < n ; i++){
		for(int j = 0; j < n; j++){
			if(a[i] < a[j]){
				swap(a[i], a[j]);
			}
		}
	}
	
	for (int i = 0; i < n ; i++){
		cout << a[i] << ' ';
	}
	return 0;
}
