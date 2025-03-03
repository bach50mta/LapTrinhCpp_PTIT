#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ifstream filein("PTIT.in");
	ofstream fileout("PTIT.out");
	string line;
	
	while(getline(filein, line)) {
		fileout << line << endl;
	}
}
