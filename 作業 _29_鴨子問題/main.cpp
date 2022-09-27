#include <iostream>
#include <cmath>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int duck(int n, int sum);

int main(int argc, char** argv) {
	int n ,a;
	
	while (cin >> n){
		a = duck(n, 0);
		cout << "總共賣出了 " << a << " 隻鴨子" << endl;
		
	}
	return 0;
}

int duck(int n, int sum){
	static int i = 1; 
	if(n > 0){
		cout << "經過第 " << i << " 個村子時，賣出 " << pow(2, n) << endl;
		sum += pow(2, n);
		n--;i++;
		return(duck(n, sum));
	}else{
		return sum;
	}	
	
}
