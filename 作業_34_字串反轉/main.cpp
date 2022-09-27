#include <iostream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void reverseString(char * A, int length){
	char a;
	for(int i = 0; i < length/2 ; i++){
		swap(*(A+i), *(A+length-1-i));
	}
}

int main(int argc, char** argv) {
	char A[100];
	int n;
	while(cin.getline(A,100)){
		n =  strlen(A);
		
		reverseString(A, n);
		
		cout << A << endl;
	}
	
	return 0;
}


//char s[10];
//cin.getline(str, 100)
//string str;
//str = getline(cin)

/*
length = ;
		cout << "Input: " << A << endl;
		reverseString(A)
		cout << "Output :" << &A << endl;
		*/
		
//	string S;
//	while(getline(cin, S)){
	
	
		
	
		
		
