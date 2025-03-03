#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int A[100][100];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++) cin >> A[i][j];
	}
	int m;
	cin >> m;
	int B[10][10];
	for(int i=0; i<m; i++){
		for(int j=0; j<m; j++) cin >> B[i][j];
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			A[i][j] *= B[i%m][j%m];
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}
