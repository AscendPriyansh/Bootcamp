#include<bits/stdc++.h>
using namespace std;

bool f(int n, vector<long long>& v, bool res) {
    if(n==1) {
        return res;
    }
    if(!(v[n-1]>=v[n-2])) {
        res=false;
    }
    f(n-1, v, res);
}

int main() {
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    if(f(n, v, true)) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }

    return 0;
}