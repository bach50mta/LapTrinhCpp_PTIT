#include<iostream>
#include<string.h>
using namespace std;

class Nhanvien{
private:
    string id_s, name, sex, birth, add, tax, date;
public:
    Nhanvien(){
        id_s = name = sex = birth = add = tax = date ="";
    }

    friend istream& operator>>(istream &nhap, Nhanvien&);
    friend ostream& operator<<(ostream &xuat, Nhanvien&);   

};

int id=0;

istream& operator>>(istream &nhap, Nhanvien &nv){
    if(id==0) nhap.ignore();
    id++;
    nv.id_s = string(5-to_string(id).length(), '0') + to_string(id);
    getline(nhap, nv.name);
    getline(nhap, nv.sex);
    getline(nhap, nv.birth);
    getline(nhap, nv.add);
    getline(nhap, nv.tax);
    getline(nhap, nv.date);
    
    return nhap;
}
ostream& operator<<(ostream &xuat, Nhanvien&nv){
    xuat << nv.id_s << " " << nv.name << " " << nv.sex << " " << nv.birth << " "
        << nv.add << " " << nv.tax << " " << nv.date << endl;
    return xuat;
}

int main(){
    int n;
    cin >> n;

    Nhanvien nv[50];
    for(int i=0; i<n; i++){
        cin >> nv[i];
    }
    for(int i=0; i<n; i++) cout << nv[i];


}