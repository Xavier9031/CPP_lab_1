//============================================================================
// Name        : 作業02.cpp
// Author      : 1082414張恆達
// Version     :
// Copyright   : Your copyright notice
// Description : 假設現在是攝氏 C 度，則華氏 F 度可以表示成 F=C*9/5+32，請設計一個溫度轉換器
//============================================================================

#include <iostream>
using namespace std;

int main() {

	//初始化
	double C, F;

	//請使用者輸入攝氏溫度
	cout << "請輸入攝氏溫度: ";
	cin >> C;

	//溫度換算
	F = C*9 / 5+32;

	//輸出
	cout << "目前為華氏 " << F << " 度" << endl;
	return 0;
}
