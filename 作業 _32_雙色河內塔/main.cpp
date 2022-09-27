#include <iostream>
using namespace std;

int I;

void print (char from, char to);

void Tower(int n, char start, char end, char middle) ;

void TwoColarTower(int n);

int main(int argc, char** argv) {
	int n; 
    while(cin >> n){
    	I = 0;
    	TwoColarTower(n);
    	cout << "¦¸¼Æ: " << I << endl; 
	}
	
	return 0;
}

void print (char from, char to){
	cout << "move disk from " << from << " to " << to << endl;
	I++;
}

void Tower(int n, char start, char middle, char end) { 
    if (n == 1) { 
        print(start, end);
        print(start, end);
		return; 
    }else{
    	Tower(n - 1, start, end, middle);
		Tower(1, start, middle, end);
		Tower(n - 1, middle, start, end);
	}
} 

void TwoColarTower(int n){
	char a = 'A';
	char b = 'B';
	char c = 'C';
	int i;
	for(i = n / 2; i > 1; i--) {
		Tower(i - 1, a, b, c);
		print(a, b);
		print(a, b);
		Tower(i - 1, c, b, a);
		print(b, c);
	}
	print(a, b);
	print(a, c);
}
