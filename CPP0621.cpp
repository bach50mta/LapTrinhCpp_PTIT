#include<iostream>
#include<string.h>
#include<algorithm>
#include<cstdbool>
#include<vector>

using namespace std;

class Sinhvien{
private:
    string name, email;
public:
    string id, grade;
    Sinhvien(){
        id = grade = name = email = "";
    }

    friend istream& operator >> (istream& mycin, Sinhvien&);
    friend ostream& operator << (ostream& mycout, Sinhvien&);
};

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
    return x.id < y.id;
}


int main (){
    vector<Sinhvien> sv;
    Sinhvien tmp;
    
    while(cin >> tmp){
        sv.push_back(tmp);
    }
    sort(sv.begin(), sv.end(), cmp);
    for(int i=0; i<sv.size(); i++) cout << sv[i]; 
}