#include<iostream>
#include<string>
#include<sstream>
using namespace std;

class Giangvien{
private:
    string name, sub;
public:
    string id, tmp;
    Giangvien(){
        name = sub = "";
        id = "GV";
    }

    friend istream&operator>>(istream& mycin, Giangvien&);
    friend ostream&operator<<(ostream& mycout, Giangvien&);

};
int count=0;
istream&operator>>(istream& mycin, Giangvien& gv){
    count++;
    gv.id += string(2-to_string(count).length(), '0') + to_string(count);
    getline(mycin, gv.name);
    for(int i=0; i<gv.name.length(); i++) gv.tmp.push_back(toupper(gv.name[i]));

    getline(mycin, gv.sub);
    string s="";
    stringstream ss(gv.sub);
    string token;
    while(ss >> token){
        s+= toupper(token[0]);
    }
    gv.sub = s;

    return mycin;
}

ostream&operator<<(ostream& mycout, Giangvien& gv){
    mycout << gv.id << " " << gv.name << " " << gv.sub << endl;
    return mycout;
}

int main(){
    int n; cin >> n;
    cin.ignore();

    Giangvien gv[100];
    for(int i=0; i<n; i++) cin >> gv[i];

    int q; cin >> q;
    cin.ignore();

    while(q--){
        string key;
        getline(cin, key);

        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << key << ":" << endl;
        for(int i=0; i<key.length(); i++) key[i] = toupper(key[i]);
        for(int i=0; i<n; i++){
            string token;
            int a=0, b=0;
            stringstream ss(key);
            while(ss >> token){
                a++;
                if(gv[i].tmp.find(token) != string::npos) b++;
            }
            if(a==b) cout << gv[i];
        }
    }
}