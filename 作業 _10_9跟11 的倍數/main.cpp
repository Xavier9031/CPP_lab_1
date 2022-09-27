#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin >> n ;
	
	for (int i = 1; i <=n; i++ ){
		int N ;
		cin >> N;
		int temp = N;
		int sum_all = 0;
		int sum_odd = 0;
		
		while(temp > 0){
			sum_all += temp%10;
			temp /= 10;
		}
		
		temp = N;
		
		while(temp > 0){
			sum_odd += temp%10;
			temp /= 100;
		}
		
		int sum_even = sum_all - sum_odd;
		
		if (sum_all % 9 == 0){
			cout << "O ";
		}else{
			cout << "X ";
		}
		
		if (sum_odd == sum_even){
			cout << "O" <<endl;
		}else{
			cout << "X" << endl;
		}
		cout << sum_all << endl<< sum_odd << endl<< sum_even << endl;
		
	}
	return 0;
}
