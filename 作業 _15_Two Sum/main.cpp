#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[4] = {2, 7, 11, 15};
	int i = 0;
	int j = 1;
	int t;
	cin >> t;
	while(a[i] + a[j] != t){
		if (j == 3){
			i++;
			j = i+1;
		}
		j++;
	}
	
	cout << i << ", " << j << endl;
	return 0;
}
