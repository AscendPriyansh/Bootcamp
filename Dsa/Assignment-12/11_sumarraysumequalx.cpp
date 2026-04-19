#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, x;
    cin>>n>>x;

    vector<long long> v(n);
    for(long long i=0; i<n; i++) {
        cin>>v[i];
    }

    map<long long, long long> mpp;
    for(long long i=0; i<n; i++) {
        mpp[v[i]]++;
    }

    for(long long i=0; i<n; i++) {
        long long store = x - v[i];
        if(mpp.find(store)!=mpp.end()) {
            
        }
    }

    cout<<"NO";

    return 0;
}