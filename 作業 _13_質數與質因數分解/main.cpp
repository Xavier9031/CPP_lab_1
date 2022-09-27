#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n,l,k;
	while(cin >> n){
		cout << "1 = 1 * 1" << endl;
		for(int i = 2; i <= n; i++){
			 l = 2;
			 k = i;
			 cout << i << " = 1";
   			while(k > 1){
        		while(k % l == 0){
       	    		cout << " * "<< l ;
       	     		k /= l;
       			}	
        	 	l++;
    		}
    		 cout << endl;
		}
	}
	
	
	return 0;	
}
	
	
