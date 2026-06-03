#include<bits/stdc++.h>
using namespace std;

int f(int n, vector<long long>& v, long long x, int res) {
    if(n==0) {
        return res;
    }
    if(v[n-1]==x) {
        res=n;
        return res;
    }
    return f(n-1, v, x, res);
}

int main() {
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    long long x;
    cin>>x;

    cout<<f(n, v, x, -1);

    return 0;
}