#include<iostream>
#include<string.h>
using namespace std;

string solve(string s){
    for(int i=s.length()-1; i>0; i--){
        if(s[i]<s[i-1]){
            int x=i;
            for(int j=i+1; j<s.length(); j++){
                if(s[j]<s[i-1] && s[j]>s[x]){
                    x=j;
                }
            }
            swap(s[i-1], s[x]);
            return s;
        }
    }
    return "-1";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        cout << solve(s) << endl;
    }
}