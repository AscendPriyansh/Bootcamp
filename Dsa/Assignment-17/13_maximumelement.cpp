#include<bits/stdc++.h>
using namespace std;

long long f(int n, vector<long long> &v, long long max) {
    if(n==0) {
        return max;
    }
    if(max<v[n-1]) {
        max=v[n-1];
    }
    f(n-1, v, max);
}

int main() {
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    cout<<f(n, v, INT_MIN);

    return 0;
}