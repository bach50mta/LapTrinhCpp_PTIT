#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> xenke(vector<int> a, int n){
    int i=0, j=n-1;
    vector<int> res(n);
    sort(a.begin(), a.end());
    for(int k=0; k<n; k++){
        res[k] = (k%2!=0) ? a[i++] : a[j--];
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        a = xenke(a, n);
        for(int n : a){
            cout << n << " ";
        }
        cout << endl;
    }
}