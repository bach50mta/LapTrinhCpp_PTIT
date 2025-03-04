#include<iostream>
#include<string.h>
#include<stdbool.h>
#include<iomanip>
#include<algorithm>

using namespace std;

struct Sinhvien
{
    string code, name, grade;
    float a,b,c;
};

void input(Sinhvien &sv){
    getline(cin, sv.code);
    getline(cin, sv.name);
    getline(cin, sv.grade);

    cin >> sv.a >> sv.b >> sv.c;
    getchar();
}

bool cmp(Sinhvien x, Sinhvien y){
    return x.code < y.code;
}

void sapxep(Sinhvien *sv, int n){
    sort(sv, sv+n, cmp);
}

void inds(Sinhvien sv[], int n){
    for(int i=0; i<n; i++){
        cout << i+1 << " " << sv[i].code << " " << sv[i].name << " " << sv[i].grade << " "
        << fixed << setprecision(1) << sv[i].a << " " 
        << fixed << setprecision(1) << sv[i].b << " " 
        << fixed << setprecision(1) << sv[i].c << endl;
    }
}

int main(){
    int n;
    cin >> n;
    getchar();

    Sinhvien sv[50];
    for(int i=0; i<n; i++){
        input(sv[i]);
    }
    sapxep(sv, n);
    inds(sv, n);
}