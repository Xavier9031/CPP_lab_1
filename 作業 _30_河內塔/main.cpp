#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void Tower(int n, char start, char end, char middle) ;

int main() { 
    int n; 
    while(cin >> n){
    	Tower(n, 'A', 'C', 'B');
    	cout << "�`�@���� " <<  pow(2, n)-1 << " ��";
	}
    return 0; 
} 

void Tower(int n, char start, char end, char middle) { 
    if (n == 1) { 
        cout << "���ʽL�l " << n << " �q�W " << start << " ��W " << end << endl;  
        
    } 
    Tower(n - 1, start, middle, end);
    cout << "���ʽL�l " << n << " �q�W " << start << " ��W " << end << "!!!!" <<endl; 
    Tower(n - 1, middle, end, start); 
} 
