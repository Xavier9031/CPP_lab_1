#include <iostream>
using namespace std;
char A[200];
int c[123] = {0};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
	int n = 0;
	do{
		cin >> A[n++];
	}while(cin.get() !='\n');
	
	
	for(int i = 0; i<=n; i++){
		c[int(A[i])]++;
	}
	for (int i = 40; i <= 123; i++){
		if(c[i] != 0){
			cout << char(i) << " => " << c[i] << endl;
		}
		
	}
    return 0;
}
