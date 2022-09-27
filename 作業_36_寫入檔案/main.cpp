#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char data [100];
	ofstream outfile;
	string title;
	
	
	while(cin >> title){
		outfile.open(title + ".txt");
		while(cin.getline(data, 100)){
			if(data[0] == 24) break;
			if(data[0] == 0) break;
			outfile << data << endl;
		}
		outfile.close();
		if(data[0] == 0) break;
	}
	
	
	
	return 0;
}
