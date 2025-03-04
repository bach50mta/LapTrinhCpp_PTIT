#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>

using namespace std;

struct Nhanvien
{
    int id;
    string name, sex, birth, add, tax, date;
};

void chuanHoaNgay(string &day){
    if(day[1]=='/') day.insert(0, "0");
    if(day[4]=='/') day.insert(3, "0");
}

void input(Nhanvien &nv){
    getline(cin, nv.name);
    getline(cin, nv.sex);
    getline(cin, nv.birth);
    getline(cin, nv.add);
    getline(cin, nv.tax);
    getline(cin, nv.date);
    
    chuanHoaNgay(nv.birth);
    chuanHoaNgay(nv.date);
}

bool dieukien(Nhanvien x, Nhanvien y){
    int day_x, month_x, year_x;
    int day_y, month_y, year_y;
    
    sscanf(x.birth.c_str(), "%d/%d/%d", &day_x, &month_x, &year_x);
    sscanf(y.birth.c_str(), "%d/%d/%d", &day_y, &month_y, &year_y);
    if(year_x != year_y) return year_x < year_y;
    if(month_x != month_y) return month_x < month_y;
    return day_x < day_y;
}

void sapxep(Nhanvien *nv, int n){
    sort(nv, nv+n, dieukien);
}

void in(Nhanvien nv[], int n){
    for(int i=0; i<n; i++){

        cout << setw(5) << setfill('0') << nv[i].id << " " << nv[i].name << " " << nv[i].sex << " "
            << nv[i].birth << " " << nv[i].add << " " << nv[i].tax << " " << nv[i].date << endl; 
    }
}

int main(){
    int n;
    cin >> n;
    getchar();
    
    Nhanvien nv[40];
    for(int i=0; i<n; i++){
        nv[i].id = i+1;
        input(nv[i]);
    }
    sapxep(nv, n);
    in(nv, n);

}