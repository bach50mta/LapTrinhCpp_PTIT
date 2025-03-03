#include<iostream>
#include<cctype>
using namespace std;

bool isNguyenAm(char c){
	c = tolower(c);
	return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y');
}

int main(){
	string s;
	cin >> s;
	string res ="";
	for(int i=0; i<s.length(); i++){
		char c = s[i];
		if(!isNguyenAm(c)) {
			res += ".";
			res +=  tolower(c);
		}
	}
	cout << res << endl;
	
}
