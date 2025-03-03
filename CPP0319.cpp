#include<iostream>
#include<vector>
using namespace std;

void findMinMax(int m, int s){
	int sum = s;
//	tim Max
	vector<int> maxNum(m, 0);
	for(int i=0; i<m; i++){
		if(sum>9) {
			maxNum[i]=9;
			sum -= 9;
		} else {
			maxNum[i]=sum;
			sum=0;
		}
	}
//	Tim Min
	vector<int> minNum(m, 0);
	minNum[0]=1;
	sum = s-1;
	for(int i=m-1; i>0; i--){
		if(sum>9){
			minNum[i]=9;
			sum -= 9;
		} else {
			minNum[i]=sum;
			sum=0;
		}
	}
	minNum[0] += sum;
	
	for(int i=0; i<m; i++) cout << minNum[i];
	cout << " ";
	for(int i=0; i<m; i++) cout << maxNum[i];
	cout << endl;
}

int main(){
	int m, s;
	cin >> m >> s;
	
	if (s > 9 * m || s == 0) {
		cout << -1 << " " << -1;
	} else findMinMax(m, s);
}
