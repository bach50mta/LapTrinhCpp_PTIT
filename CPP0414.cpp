#include<iostream>
#include<vector>
using namespace std;

void solve(vector<long long> &a, int n){
	int b[10]={0};
	for(int i=0; i<n; i++){
		while(a[i]>0){
			int c = a[i]%10;
			b[c]++;
			a[i] /= 10;
		}
	}
	for(int i=0; i<10; i++){
		if(b[i]>0) cout << i << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<long long int> a(n);
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		solve(a, n);
	}
}
