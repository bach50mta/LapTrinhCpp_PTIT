#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[1000];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int b[10000]={0};
	for(int i=0; i<n; i++){
		b[a[i]]++;
	}
	for(int i=0; i<1000; i++){
		if(b[i]>0) cout << i << " ";
	}
}
