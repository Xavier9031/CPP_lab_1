#include <iostream>
using namespace std;

//�W�ҮɦѮv�̷Ӯy�����ա]�C�դT�H�^�C���Ҫ����դ覡���y�� 1~3 �b�Ĥ@�աB4~6 �b�ĤG�� ... �H�������F
//�ƾǽҪ����դ覡���y�� 1, 4, 7.. �b�Ĥ@�աB2, 5, 8 �b�ĤG�� ... �H�������C
//�Q�νм��g�@�ӧQ�ήy���d�߲էO���{���C

int main(int argc, char** argv) {
	
	//��J�y�� 
	int a, b, c;
	cout << "�п�J�y��: ";
	cin >> a;
	
	//�P�_�էO 
	b = (a+2) / 3;
	c = (a+3) % 3;
	if (c == 0){
		c = 3;
	}
	
	//��X 
	cout << "���ҩҦb���էO: " << b << endl; 
	cout << "�ƾǽҩҦb���էO: " << c << endl;
	
	system("PAUSE");
	return 0;
}
