#include <iostream>
#include <string>
using namespace std;

void permute(string a, int i, int n, int N);

void swap(char *a, char *b);

int main(int argc, char** argv) {
	string str;
	int N;
	while(cin >> str){
		N = str.size();
		permute(str, 0, N-1, N);
		cout << endl << "======" << endl;
	}
	return 0;
}

void swap(char *a, char *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void permute(string a, int i, int n, int N){
	int j;
	if(i == n){
		for(j = 0; j < N; j++) 
		 	cout << a[j];
	}else{
	  	for(j = i; j <= n; j++){
	    	swap(&a[i], &a[j]);
	    	permute(a, i + 1, n ,N);	//°j¶i¥h 
	    	swap(&a[i], &a[j]);
	    	if(j != n){
	    		cout << endl;
			}
	  	}
	}
}
