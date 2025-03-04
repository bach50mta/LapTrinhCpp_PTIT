#include<iostream>
#include<string.h>
#include<iomanip>
#include<cctype>
#include<sstream>
using namespace std;

struct Sinhvien{
    string name, grade, date;
    float score;
};

void input(Sinhvien &sv){
    getline(cin, sv.name);
    getline(cin, sv.grade);
    getline(cin, sv.date);
    cin >> sv.score;
    getchar();
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

int main(){
    int n;
    cin >> n;
    getchar();
    struct Sinhvien sv[50];
    for(int i=0; i<n; i++){
        input(sv[i]);
    }
    
    for(int i=0; i<n; i++){
        if(sv[i].date[1]=='/') sv[i].date.insert(0, "0");
        if(sv[i].date[4]=='/') sv[i].date.insert(3, "0");
        
        sv[i].name = chuanHoaTen(sv[i].name);

        string s = (i<9) ? "B20DCCN00" : "B20DCCN0";
        cout << s << i+1 << " " << sv[i].name << " " << sv[i].grade << " " << sv[i].date << " " << fixed << setprecision(2) << sv[i].score << endl;
    }

    
}