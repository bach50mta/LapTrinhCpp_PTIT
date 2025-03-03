#include<iostream>
#include<vector>

using namespace std;

vector<int> hopvector(vector<int> a,int n, vector<int> b, int m){
    int i=0, j=0;
    vector<int> result;
    while(i<n && j<m){
        if(a[i]<b[j]){
            if(result.empty() || result.back() != a[i]){
                result.push_back(a[i]);
            }
            i++;
        } else if(b[j]<a[i]){
            if(result.empty() || result.back() != b[j]){
                result.push_back(b[j]);
            }
            j++;
        } else {
            if(result.empty() || result.back() != a[i]){
                result.push_back(a[i]);
            }
            i++; j++;
        }
    }
    while(i<n){
        if(result.empty() || result.back() != a[i]){
            result.push_back(a[i]);
        }
        i++;
    }
    while(j<m){
        if(result.empty() || result.back() != b[j]){
            result.push_back(b[j]);
        }
        j++;
    }
    return result;
}

vector<int> giaovector(vector<int> a, int n, vector<int> b, int m){
    int i=0, j=0;
    vector<int> res;
    while(i<n && j<m){
        if(a[i]>b[j]){
            j++;
        } else if(a[i]<b[j]){
            i++;
        } else {
            res.push_back(a[i]);
            i++; j++;
        }
    }
    return res;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(m);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<m; i++) cin >> b[i];

        vector<int> hop = hopvector(a, n, b, m);
        vector<int> giao = giaovector(a, n, b, m);

        for(int num : hop) cout << num << " ";
        cout << endl;
        for(int num : giao) cout << num << " ";
        cout << endl;
    }
}