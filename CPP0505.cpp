#include<iostream>
using namespace std;

struct nhanvien{
	string id;
	string fullname, gender, birth, add;
	string idtax;
	string date;
};

void chuanHoaNgay(string &s){
	if (s[1] == '/')
        s.insert(0, "0");
    if (s[4] == '/')
        s.insert(3, "0");
}

int main(){
	nhanvien nv;
	getline(cin, nv.fullname);
	cin >> nv.gender;
	cin >> nv.birth;
	chuanHoaNgay(nv.birth);

	cin.ignore();
	getline(cin, nv.add);
	cin >> nv.idtax;
	cin >> nv.date;
	chuanHoaNgay(nv.date);
	
	cout << "00001 " << nv.fullname << " " << nv.gender 
		<< " " << nv.birth << " " << nv.add << " " << nv.idtax 
		<< " " << nv.date << endl;
}
