#include<iostream>
using namespace std;

void solve(int a[100][100], int n, int m){
	int b[100][100]={0};
	for(int i=0;i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i][j]==1){
				for(int k=0; k<n; k++){
					b[k][j]=1;
				}
				for(int k=0; k<m; k++){
					b[i][k]=1;
				}
			}
		}
	}
	
	for(int i=0;i<n; i++){
		for(int j=0; j<m; j++){
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int main (){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[100][100];
		for(int i=0;i<n; i++){
			for(int j=0; j<m; j++){
				cin >> a[i][j];
			}
		}
		solve(a, n, m);
	}
}
