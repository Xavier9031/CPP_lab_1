#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int f(int n, int sum);

int main(int argc, char** argv) {
	int n, i = 0;
	int T[200] = {0};
	
	while(cin >> n && n!=0){
		T[i] = n;
		i++;
	}
	
	for(int j = 0; j < i; j++){
		int sum = 0;
		cout << "f(" << T[j] << ") = " <<f(T[j], sum) <<endl;
	}
	return 0;
}

int f(int n, int sum){
	sum += n%10;
	n /= 10;
	if(n != 0){
		return f(n, sum);
	}else{
		return sum;
	}
	
}
