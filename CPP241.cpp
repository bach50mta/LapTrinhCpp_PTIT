#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t; 
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		vector<int> A(n);
		for(int i=0; i<n; i++){
			cin >> A[i];
		}
		
		int count =0, l = 0, r = n-1;
		while(l<=r){
			if(A[l]==A[r]) {
				r--; l++;
			} else if(A[l]>A[r]){
				r--;
				A[r] += A[r+1];
				count++;
			} else {
				l++;
				A[l] += A[l-1];
				count++;
			}
		}
		cout << count << endl;
	}
}
