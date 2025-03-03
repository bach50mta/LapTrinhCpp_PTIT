#include<iostream>
using namespace std;

void uocNT(long long n){
	while(n%2==0){
		cout << 2 << " ";
		n /= 2;
	}
	long long j=3;
	while(j*j<=n){
		while(n%j==0){
			cout << j << " ";
			n /= j;
		}
		j+=2;
	}
	if(n>2) cout << n;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		uocNT(n);
		cout << endl;
	}
}
