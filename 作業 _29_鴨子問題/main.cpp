#include <iostream>
#include <cmath>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int duck(int n, int sum);

int main(int argc, char** argv) {
	int n ,a;
	
	while (cin >> n){
		a = duck(n, 0);
		cout << "�`�@��X�F " << a << " ���n�l" << endl;
		
	}
	return 0;
}

int duck(int n, int sum){
	static int i = 1; 
	if(n > 0){
		cout << "�g�L�� " << i << " �ӧ��l�ɡA��X " << pow(2, n) << endl;
		sum += pow(2, n);
		n--;i++;
		return(duck(n, sum));
	}else{
		return sum;
	}	
	
}
