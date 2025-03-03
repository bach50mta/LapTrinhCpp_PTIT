#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		int max = 0;
		for(int i=0; i<n; i++){
			cin >> a[i];
			if(max < a[i]) max = a[i];
			
		}
		vector<int> b(max+1, 0);
		for(int i=0; i<n;i++){
			b[a[i]]++;
		}
		int s=0;
		for(int i=0; i<max+1; i++){
			if(b[i]>1) s+=b[i];
		}
		cout << s << endl;
	}
}
