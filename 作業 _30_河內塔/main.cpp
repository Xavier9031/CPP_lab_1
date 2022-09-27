#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void Tower(int n, char start, char end, char middle) ;

int main() { 
    int n; 
    while(cin >> n){
    	Tower(n, 'A', 'C', 'B');
    	cout << "總共移動 " <<  pow(2, n)-1 << " 次";
	}
    return 0; 
} 

void Tower(int n, char start, char end, char middle) { 
    if (n == 1) { 
        cout << "移動盤子 " << n << " 從柱 " << start << " 到柱 " << end << endl;  
        
    } 
    Tower(n - 1, start, middle, end);
    cout << "移動盤子 " << n << " 從柱 " << start << " 到柱 " << end << "!!!!" <<endl; 
    Tower(n - 1, middle, end, start); 
} 
