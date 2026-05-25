#include<bits/stdc++.h>
using namespace std;

void f(int n, int k, int start, vector<int>& v) {
    if(start==n) {
        for(int i=0; i<v.size(); i++) {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    if(start>n) {
        return;
    }
    
    for(int i=1; i<=k; i++) {
        v.push_back(i);
        f(n, k, start+i, v);
        v.pop_back();
    }
}

int main() {
    int n, k;
    cin>>n>>k;

    vector<int> v;
    f(n, k, 0, v);

    return 0;
}