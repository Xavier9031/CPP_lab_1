#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, start, end ,count = 0;
	while(cin >> n >> start >> end){
		int arr[1000] = {0};
		arr[0] = 1;
		arr[1] = 1;
		for(int i = 0; i < n-2; i++){
			arr[i+2] = arr[i] + arr[i+1]; 
		}
		while(arr[count] < n){
				count++;
		}
		cout << count+1 << ' ';
		for (;start <= end; start++){
			
			cout << arr[start] << ' ';
			
		}
		cout << endl;
	}
	
	return 0;
}
