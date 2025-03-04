#include<iostream>
#include<string.h>
#include<algorithm>
#include<sstream>
#include<iomanip>
#include<cctype>

using namespace std;

struct Sinhvien{
    int id;
    string name, date, grade;
    float score;
};

void input(Sinhvien &sv){
    getline(cin, sv.name);
    getline(cin, sv.grade);
    getline(cin, sv.date);
    cin >> sv.score;
    getchar();
    if(sv.date[1]=='/') sv.date.insert(0, "0");
    if(sv.date[4]=='/') sv.date.insert(3, "0");
}

string chuanHoaTen(string name){
    for(char &c : name){
        c = tolower(c);
    }

    stringstream s(name);
    string word, res;
    while(s >> word){
        word[0] = toupper(word[0]);
        res += word + " ";
    }
    if(!res.empty()){
        res.pop_back();
    }
    return res;
}

bool dieukien(Sinhvien x, Sinhvien y){
    if(x.score > y.score) return true;
    return false;
}

void sapxep(Sinhvien *sv, int n){
    sort(sv, sv+n, dieukien);
}

// void print(Sinhvien sv[], int n){
    
// }

int main(){
    int n;
    cin >> n;
    getchar();

    Sinhvien sv[50];
    for(int i=0; i<n; i++) {
        sv[i].id = i+1;
        input(sv[i]);
    }
    sapxep(sv, n);
    for(int i=0; i<n; i++){

        sv[i].name = chuanHoaTen(sv[i].name);

        string s;
        s = (sv[i].id <= 9) ? "B20DCCN00" : "B20DCCN0";
        cout << s << sv[i].id << " " << sv[i].name << " " << sv[i].grade << " " 
        << sv[i].date << " " << fixed << setprecision(2) << sv[i].score << endl;
    }
}