#include<iostream>
#include<algorithm>
using namespace std;

bool isPresent(int A[], int n, int a) {
    return binary_search(A, A + n, a); 
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		int i=1, printed=0;
		while(i<=a[n-1]){
			if(!isPresent(a, n, i)) {
				cout << i << endl;
				printed = 1;
				break;
			}
			i++;
		}
		if(printed==0) cout << a[n-1]+1 << endl;
	}
}
