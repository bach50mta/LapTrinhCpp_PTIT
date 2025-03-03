#include<iostream>
using namespace std;

long long giaithua(int n){
	if(n==0) return 1;
	return n*giaithua(n-1);
}

int main(){
	int n;
	cin >> n;
	long long s=0;
	for(int i=1; i<=n; i++){
		s+=giaithua(i);
	}
	cout << s;
}
