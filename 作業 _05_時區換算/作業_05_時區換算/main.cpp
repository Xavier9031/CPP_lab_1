#include <iostream>
using namespace std;
//�x�W�ɶ������ɶ� 
int main(int argc, char** argv) {
	
	//��J�x�W�ɶ� 
	int a, b;
	cout << "�п�J�x�W�ɶ�: ";
	cin >> a;
	
	//�P�_���ഫ 
	if (a >= 15){
		b = a - 15;
	}else{
		b = a + 9;
	}
	
	//��X 
	cout << "����ɶ�: " << b << endl;
	
	system("PAUSE");
	
	return 0;
}
