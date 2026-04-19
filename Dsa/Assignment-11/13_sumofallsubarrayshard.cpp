#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    long long total=0;
    for(int i=0; i<n; i++) {
        total+=1LL * (i+1)*(n-i)*v[i];
    }

    cout<<total;

    return 0;
}