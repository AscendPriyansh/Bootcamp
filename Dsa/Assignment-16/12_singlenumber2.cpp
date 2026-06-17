#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    long long res=0;
    for(int i=0; i<n; i++) {
        res|=v[i];
    }

    cout<<res;

    return 0;
}


