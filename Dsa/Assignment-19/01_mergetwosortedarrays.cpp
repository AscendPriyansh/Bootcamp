#include<bits/stdc++.h>
using namespace std;

vector<int> f(int n, vector<int> a, int m, vector<int> b) {
    vector<int> res;
    int idx1=0, idx2=0;

    while(idx1<n && idx2<m) {
        if(a[idx1]<=b[idx2]) {
            res.push_back(a[idx1]);
            idx1++;
        }
        else {
            res.push_back(b[idx2]);
            idx2++;
        }
    }

    if(idx1<n) {
        for(int i=idx1; i<n; i++) {
            res.push_back(a[idx1]);
            idx1++;
        }
    }

    if(idx2<m) {
        for(int i=idx2; i<m; i++) {
            res.push_back(b[idx2]);
            idx2++;
        }
    }

    return res;
}

int main() {
    int n, m;
    cin>>n>>m;

    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    vector<int> b(m);
    for(int i=0; i<m; i++) {
        cin>>b[i];
    }

    vector<int> v = f(n, a, m, b);

    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }

    return 0;
}