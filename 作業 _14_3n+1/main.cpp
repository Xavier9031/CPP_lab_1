#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i, j, n, count, n_max, count_max;
	
	for (int M = 0; M < 3; M++){
		cin >> i >> j;
		n_max = 0;
		count_max = 0;
		for(;i <= j; i++){
			n = i;
			count = 1;
			while(n != 1){
				if(n % 2 == 1){
					n = 3 * n + 1;
					count++;
				}else{
					n = n / 2;
					count++;
				}	
			}
			if(count > count_max){
				count_max = count;
				n_max = i;
			}
		}
		cout << "cycle length 發生在 " << n_max << " ，次數為 : " <<  count_max << endl;
	}
	
	return 0;	
}
	
	

