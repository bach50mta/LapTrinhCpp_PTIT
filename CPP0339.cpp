#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int count=0;
		for(int i=0; i<s.length(); i++){
			for(int j=i; j<s.length(); j++){
				if(s[i]==s[j]){
					count++;
				}
			}
		}
		cout << count << endl;
	}
}
