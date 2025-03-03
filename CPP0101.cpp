#include <iostream>
using namespace std;



int main (){
	int t;
	cin >> t;
	while(t--){
		long long n, s=0;
		cin >> n;
		s=(n*(n+1))/2;
		cout << s << endl;
	}
}
