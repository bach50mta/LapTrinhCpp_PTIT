#include<iostream>
#include<string>
#include<stdbool.h>
#include<algorithm>

using namespace std;

class Doanhnghiep{
private:
    string name;
public:
    string id;
    int sv;

    Doanhnghiep(){
        name = id ="";
    }

    friend istream&operator>>(istream& mycin, Doanhnghiep&);
    friend ostream&operator<<(ostream& mycout, Doanhnghiep&);
};

istream&operator>>(istream& mycin, Doanhnghiep& ds){
    getline(mycin, ds.id);
    getline(mycin, ds.name);
    mycin >> ds.sv;
    mycin.ignore();
    return mycin;
}

ostream&operator<<(ostream& mycout, Doanhnghiep& ds){
    mycout << ds.id << " " << ds.name << " " << ds.sv << endl;
    return mycout;
}

bool cmp(Doanhnghiep x, Doanhnghiep y){
    if(x.sv != y.sv) return x.sv > y.sv;
    return x.id < y.id;
}

void sapxep(Doanhnghiep* ds, int n){
    sort(ds, ds+n, cmp);
}

int main(){
    int n;
    cin >> n;
    cin.ignore();

    Doanhnghiep ds[100];

    for(int i=0;i<n; i++) cin >> ds[i];
    sapxep(ds, n);
    for(int i=0;i<n; i++) cout << ds[i];
}