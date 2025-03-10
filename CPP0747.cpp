#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int d_0=0,d=0;
        for(int i=s.size()-1; i>=0; i--){
            d_0 += (s[i] == '0' ? 1 : 0);
            if(s[i]=='1') {
                if(d_0>1){
                    d+=3;
                    d_0-=2;
                }
            }
        }
        cout << d << endl;
    }
}