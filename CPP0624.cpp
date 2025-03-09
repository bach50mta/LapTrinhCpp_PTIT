#include<iostream>
#include<string.h>

using namespace std;

class Sinhvien{
private:
    string name, email;
public:
    string id, grade;
    Sinhvien(){
        id = name = grade = email = "";
    }

    friend istream& operator>>(istream& mycin, Sinhvien&);
    friend ostream& operator<<(ostream& mycout, Sinhvien&);
};

istream& operator>>(istream& mycin, Sinhvien& s){
    getline(mycin, s.id);
    getline(mycin, s.name);
    getline(mycin, s.grade);
    getline(mycin, s.email);
    return mycin;
}

ostream& operator<<(ostream& mycout, Sinhvien& s){
    mycout << s.id << " " << s.name << " " << s.grade << " " << s.email << endl;
    return mycout;
}

int main(){
    int n; cin >> n;
    cin.ignore();

    Sinhvien sv[1000];
    for(int i=0; i<n; i++) cin >> sv[i];
    
    int q; cin >> q;
    cin.ignore();

    while(q--){
        string s; getline(cin, s);
        string a;
        for(int i=0; i<s.length(); i++) a.push_back(toupper(s[i]));

        cout << "DANH SACH SINH VIEN NGANH " << a << ":" << endl;
        for(int i=0; i<n; i++){
            if(a[0]==sv[i].id[5]) {
                if(a[0]=='K' || a[0]=='V' || a[0]=='D') {
                    cout << sv[i];
                } else if(sv[i].grade[0] != 'E') cout << sv[i];

            } 
        }
    }
}