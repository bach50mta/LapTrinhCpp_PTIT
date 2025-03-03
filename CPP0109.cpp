#include<iostream>
#include<cmath>
using namespace std;

bool isCanbang(int num){
	int even=0, odd=0;
	int temp=num;
	
	while(temp>0){
		int d=temp%10;
		(d%2==0) ? even++ : odd++;
		temp/=10;
	}
	return even==odd;
}

int main(){
	int n;
	cin >> n;
	int count=0;
	for(int i=pow(10,n-1); i<pow(10,n); i++){
		if(isCanbang(i)) {
			cout << i << " ";
			count++;
			if(count%10==0) cout << endl;
		}
	}
}
