#include<iostream>
#include<string.h>
#include<stdbool.h>
#include<algorithm>
#include<iomanip>

using namespace std;

struct Sinhvien
{
    string id, name, grade;
    float a,b,c;
};

void input(Sinhvien &sv){
    getline(cin, sv.id);
    getline(cin, sv.name);
    getline(cin, sv.grade);

    cin >> sv.a >> sv.b >> sv.c;
    getchar();
}

bool cmp(Sinhvien x, Sinhvien y){
    return x.name < y.name;
}

void sapxep(Sinhvien *sv, int n){
    sort(sv, sv+n, cmp);
}

void inds(Sinhvien sv[], int n){
    for(int i=0; i<n; i++){
        cout << i+1 << " " << sv[i].id << " " << sv[i].name << " " << sv[i].grade << " "
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
