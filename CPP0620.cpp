#include<iostream>
#include<string.h>
#include<cstdbool>
#include<algorithm>

using namespace std;

class Sinhvien{
private:
    string name, email;
public:
    string id, grade;
    Sinhvien(){
        id = name = grade = email = "";
    }

    friend istream& operator >> (istream& mycin, Sinhvien&);
    friend ostream& operator << (ostream& mycout, Sinhvien&);

};
int t=0;
istream& operator >> (istream& mycin, Sinhvien& sv){
    getline(mycin, sv.id);
    getline(mycin, sv.name);
    getline(mycin, sv.grade);
    getline(mycin, sv.email);
    return mycin;
}

ostream& operator << (ostream& mycout, Sinhvien& sv){
    mycout << sv.id << " " << sv.name << " " << sv.grade << " " << sv.email << endl;
    return mycout;
}

bool cmp(Sinhvien x, Sinhvien y){
    if(x.grade != y.grade) return x.grade < y.grade;
    return x.id < y.id; 
}

void sapxep(Sinhvien* sv, int n){
    sort(sv, sv+n, cmp);
}

int main(){
    int n; cin >> n;
    cin.ignore();
    
    Sinhvien sv[1000];
    for(int i=0; i<n; i++) cin >> sv[i];
    sapxep(sv, n);
    for(int i=0; i<n; i++) cout << sv[i]; 
}