#include<iostream>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void phanSo(long long a, long long b){
	long long c = gcd(a, b);
	cout << a/c << "/" << b/c;
}

int main(){
	long long a, b;
	cin >> a >> b;
	phanSo(a, b);
}
