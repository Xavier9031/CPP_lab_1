#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
	int n;
    cin >> n;
    int a[n][n] = {};
    
    int x = 0;	//�C 
    int y = 0;//�� 
    int m = 1;
    
    while(m <= n*n){
    	
        while(a[x][y] == 0 && y < n){ 
            a[x][y++] = m++;
        } 
        y--; //�Φ^�� 
        x++; //�� 
		
        while(a[x][y] == 0 && x < n){ 
            a[x++][y] = m++;
        } 
        x--;
        y--;
		 
        while(a[x][y] == 0 && y >= 0){ 
            a[x][y--] = m++;
        } 
        y++;
        x--;
		 
        while(a[x][y] == 0 && x >= 0){ 
            a[x--][y] = m++;
        } 
        x++;
        y++;
    }
    
    //�C�L 
    for(x = 0; x < n; x++){
        for(y = 0; y < n; y++){
            cout << a[x][y] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
