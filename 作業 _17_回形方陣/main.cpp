#include <iostream>
//#define N 10
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//int a[N][N] = {};

int main(int argc, char** argv) {
	
	int n;
    cin >> n;
    
    int ** a;
    a = new int * [n];
    for(int i = 0; i < n; i++){
    	a[i] = new int[n];
	}
	
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            a[i][j] = 0;
        }
    }
    
    int x = 0;	//�C 
    int y = n-1;//�� 
    int m = n*n;
    
    
    
    while(m <= n*n){
		while(a[x][y] == 0 && x >= 0){
            a[x--][y] = m--;
            if(x == -1)
            break;
        } 
        x++;
        y++;
        
        while(a[x][y] == 0 && y < n){ 
            a[x][y++] = m--;
            if(x == -1)
            break;
        } 
        y--; //�Φ^�� 
        x++; //�� 
		
		while(a[x][y] == 0 && x < n){ 
            a[x++][y] = m--;
            if(x == -1)
            break;
        } 
        x--;
        y--;
		
		while(a[x][y] == 0 && y >= 0){ 
            a[x][y--] = m--;
            if(x == -1)
            break;
        } 
        y++;
        x--;
		
        
        
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
