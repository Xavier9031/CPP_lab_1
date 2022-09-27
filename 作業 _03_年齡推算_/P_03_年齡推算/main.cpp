#include <iostream>
using namespace std;
/* 輸入小綠年齡，
   大綠比小綠大三歲
   阿藍比小綠年齡的兩倍少五歲
   阿紫年齡的十位數和阿藍相同、個位數和大綠相同
   請推算出阿紫的年齡*/

int main(int argc, char** argv) {
	
	//{a:小綠, b:大綠, c:阿藍, d:阿紫} 
	int a,b,c,d;
	
	//輸入 
	cout << "請輸入小綠的年齡: ";
	cin >> a;
	
	//運算 
	b = a + 3;
	c = 2 * a - 5;
	d = (c/10)*10 + b%10;
	
	//輸出 
	cout << "阿紫的年齡為: " << d <<endl;
	
	system("PAUSE");
	return 0;
}
