#include<iostream>
#include<fstream>
#include<map>

using namespace std;

int main(){
    fstream file("DATA.in");
    map<int, int> freq;
    int num;
    while(file >> num){
        freq[num]++;
    }
    for(const auto& p:freq){
        cout << p.first << " " << p.second << endl;

    }
}