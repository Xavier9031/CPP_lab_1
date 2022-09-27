#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int f91(int N);

int main(int argc, char** argv) {
	int n, i = 0;
	int T[200] = {0};
	while(cin >> n && n!=0){
		T[i] = n;
		i++;
	}
	for(int j = 0; j < i; j++){
		cout << "f91(" << T[j] << ") = " <<f91(T[j]) <<endl;
	}
		
	return 0;
}

int f91(int N){
	if(N <= 100){
		return f91(f91(N + 11));
	}else {
		return N-10;
	}
}
