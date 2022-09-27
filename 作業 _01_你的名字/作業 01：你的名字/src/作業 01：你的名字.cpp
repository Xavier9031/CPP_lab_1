//============================================================================
// Name        : 作業01.cpp
// Author      : 1082414 張恆達
// Version     :
// Copyright   : Your copyright notice
// Description : 設定三個變數並指派，並依照格式輸出。
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {

	//初始化並指派值
	string name = "張恆達";
	string city = "板橋";
	int birth = 19;

	//依照格式輸出
	cout << "Hello World,我的名字是" << name << endl << "我今年" <<birth << "歲，來自" << city << "。";



	return 0;
}
