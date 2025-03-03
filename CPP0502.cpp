#include<iostream>
#include <iomanip> 

using namespace std;

int main(){
	string fullname, date;
	getline(cin, fullname);
	cin >> date;
	float diem1, diem2, diem3;
	cin >> diem1 >> diem2 >> diem3;
	float sum = diem1+diem2+diem3;
	cout << fullname << " " << date << " " << fixed << setprecision(1) <<sum;
}
