#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n;
    cin >> n;
    int m = n*n;
    
    int x = 0;//�C 
    int y = 0;//�� 
    if(n % 2 == 1){
		x = n-1;//�C 
    	y = n-1;//��
	}

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
    
    
	if(n % 2 == 0){
	    while(m > 0){
			while(a[x][y] == 0 && x >= 0){
	            a[x--][y] = m--;
	            if(x == -1)
	            break;
	        } 
	        x++;
	        y++;
	        
	        while(a[x][y] == 0 && y < n){ 
	            a[x][y++] = m--;
	        } 
	        y--; //�Φ^�� 
	        x++; //�� 
			
			while(a[x][y] == 0 && x < n){ 
	            a[x++][y] = m--;
	            if(x >= n)
	            break;
	        } 
	        x--;
	        y--;
			
			while(a[x][y] == 0 && y >= 0){ 
	            a[x][y--] = m--;
	        } 
	        y++;
	        x--;
	    }
	}else{
		while(m > 0){
			while(a[x][y] == 0 && x < n){ 
	            a[x++][y] = m--;
	            if(x >= n)
	            break;
	        } 
	        x--;
	        y--;
			
			while(a[x][y] == 0 && y >= 0){ 
	            a[x][y--] = m--;
	        } 
	        y++;
	        x--;
	        
			while(a[x][y] == 0 && x >= 0){
	            a[x--][y] = m--;
	            if(x == -1)
	            break;
	        } 
	        x++;
	        y++;
	        
	        while(a[x][y] == 0 && y < n){ 
	            a[x][y++] = m--;
	        } 
	        y--; //�Φ^�� 
	        x++; //�� 	
		}
	}
	
    //�C�L 
    for(x = 0; x < n; x++){
        for(y = 0; y < n; y++){
            cout << a[x][y] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    
    for(int i = 0; i < n; i++)
		delete [] a[i];
	delete [] a;
	
    return 0;
}
