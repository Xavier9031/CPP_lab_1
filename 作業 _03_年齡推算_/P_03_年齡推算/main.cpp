#include <iostream>
using namespace std;
/* ��J�p��~�֡A
   �j���p��j�T��
   ���Ť�p��~�֪��⭿�֤���
   �����~�֪��Q��ƩM���ŬۦP�B�Ӧ�ƩM�j��ۦP
   �б���X�������~��*/

int main(int argc, char** argv) {
	
	//{a:�p��, b:�j��, c:����, d:����} 
	int a,b,c,d;
	
	//��J 
	cout << "�п�J�p�񪺦~��: ";
	cin >> a;
	
	//�B�� 
	b = a + 3;
	c = 2 * a - 5;
	d = (c/10)*10 + b%10;
	
	//��X 
	cout << "�������~�֬�: " << d <<endl;
	
	system("PAUSE");
	return 0;
}
