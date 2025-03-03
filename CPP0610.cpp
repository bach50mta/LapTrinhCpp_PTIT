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



int main(){
	long long a,b,c,d;
	cin >> a >> b >> c >> d;
	long long x = gcd(a, b), y = gcd(c, d);
	a /= x;	b /= x; c /= y; d /= y;
	long long m = a*d+b*c;
	long long n = b*d;
	long long k = gcd(m, n);
	cout << m/k << "/" << n/k;
}
