#include <iostream>
using namespace std;
//台灣時間轉美國時間 
int main(int argc, char** argv) {
	
	//輸入台灣時間 
	int a, b;
	cout << "請輸入台灣時間: ";
	cin >> a;
	
	//判斷並轉換 
	if (a >= 15){
		b = a - 15;
	}else{
		b = a + 9;
	}
	
	//輸出 
	cout << "美國時間: " << b << endl;
	
	system("PAUSE");
	
	return 0;
}
