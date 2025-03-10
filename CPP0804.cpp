#include<iostream>
#include<string>
#include<fstream>
#include<set>

using namespace std;

int main(){
    fstream file;
    file.open("VANBAN.in");
    string s;

    set<string> ans;
    while(file >> s){
        for(int i=0; i<s.length();i++){
            s[i]=tolower(s[i]);
        }
        ans.insert(s);
    }
    for(auto i=ans.begin(); i!=ans.end(); i++) cout << *i << endl;
}