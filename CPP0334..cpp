#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        int sum = 0, num = 0;
        s[s.length()]='a';
        for(int i=0; i<=s.length(); i++){
            if(s[i]>='0' && s[i]<='9'){
                num = num*10 + s[i]-'0';
            } else {
                sum += num;
                num = 0;
            }
        }
        cout << sum << endl;
    }
}