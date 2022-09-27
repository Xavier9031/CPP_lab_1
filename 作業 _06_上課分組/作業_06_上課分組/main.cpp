#include <iostream>
using namespace std;

//上課時老師依照座號分組（每組三人）。國文課的分組方式為座號 1~3 在第一組、4~6 在第二組 ... 以此類推；
//數學課的分組方式為座號 1, 4, 7.. 在第一組、2, 5, 8 在第二組 ... 以此類推。
//利用請撰寫一個利用座號查詢組別的程式。

int main(int argc, char** argv) {
	
	//輸入座號 
	int a, b, c;
	cout << "請輸入座號: ";
	cin >> a;
	
	//判斷組別 
	b = (a+2) / 3;
	c = (a+3) % 3;
	if (c == 0){
		c = 3;
	}
	
	//輸出 
	cout << "國文課所在的組別: " << b << endl; 
	cout << "數學課所在的組別: " << c << endl;
	
	system("PAUSE");
	return 0;
}
