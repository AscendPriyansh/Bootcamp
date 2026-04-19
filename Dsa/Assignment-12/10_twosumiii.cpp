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
    long long pair=0;

    for(long long i=0; i<n; i++) {
        long long store = x-v[i];
        if(mpp.find(store)!=mpp.end()) {
            pair+=mpp[store];
        }

        mpp[v[i]]++;
    }
    cout<<pair;

    return 0;
}