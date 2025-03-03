#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

struct Sinhvien{
    string name, grade, date;
    float score;
};

int main(){
    int n;
    cin >> n;
    getchar();
    struct Sinhvien sv[50];
    for(int i=0; i<n; i++){
        getline(cin, sv[i].name);
        getline(cin, sv[i].grade);
        getline(cin, sv[i].date);
        cin >> sv[i].score;
        getchar();
    }
    
    for(int i=0; i<n; i++){
        if(sv[i].date[1]=='/') sv[i].date.insert(0, "0");
        if(sv[i].date[4]=='/') sv[i].date.insert(3, "0");

        string s = (i<9) ? "B20DCCN00" : "B20DCCN0";
        cout << s << i+1 << " " << sv[i].name << " " << sv[i].grade << " " << sv[i].date << " " << fixed << setprecision(2) << sv[i].score << endl;
    }

    
}