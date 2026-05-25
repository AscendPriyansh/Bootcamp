#include<bits/stdc++.h>
using namespace std;

long long f(int n, vector<long long>& v, long long min) {
    if(n==0) {
        return min;
    }
    if(min>v[n-1]) {
        min=v[n-1];
    }
    f(n-1, v, min);
}

int main() {
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    long long min = INT_MAX;
    cout<<f(n, v, min);

    return 0;
}