#include<iostream>
#include<string.h>
#include<algorithm>
#include<stdbool.h>
#include<cstdio>
using namespace std;

struct Tentuoi{
    string name, birth;
};

void input(Tentuoi &s){
    cin >> s.name >> s.birth;
}

bool cmp(Tentuoi x, Tentuoi y){
    int d_x, m_x, y_x;
    int d_y, m_y, y_y;

    sscanf(x.birth.c_str(), "%d/%d/%d", &d_x, &m_x, &y_x);
    sscanf(y.birth.c_str(), "%d/%d/%d", &d_y, &m_y, &y_y);

    if(y_x != y_y) return y_x < y_y;
    if(m_x != m_y) return m_x < m_y;
    return d_x < d_y;
}

void sapxep(Tentuoi *s, int n){
    sort(s, s+n, cmp);
}

int main(){
    int n;
    cin >> n;

    Tentuoi s[100];
    for(int i=0; i<n; i++){
        input(s[i]);
    }
    sapxep(s, n);
    cout << s[n-1].name << endl;
    cout << s[0].name << endl;

}