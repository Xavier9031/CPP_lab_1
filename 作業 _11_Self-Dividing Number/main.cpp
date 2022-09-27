#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n1, n2;
	cin >> n1 >> n2;
	for (int i = n1; i <= n2; i++){
		bool a = true;
		int temp = i;
		
		while(temp > 0){
			
			if (temp % 10 == 0){
				a = false;
				break;
			}else if (i % (temp%10) != 0){
				a = false;
				break;
			}
			temp /= 10;
		}
		
		if (a){
			cout << i <<" ";
		}
	}
	return 0;
}
