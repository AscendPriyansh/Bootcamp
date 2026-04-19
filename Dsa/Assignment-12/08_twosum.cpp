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
    long long sum=0;
    for(long long i=0; i<n; i++) {
        mpp[v[i]]++;
    }

    for(long long i=0; i<n; i++) {
        long long store = x-v[i];
        if(mpp.find(store)!=mpp.end()) {
            if(store==v[i]) {
                if(mpp[store]>1) {
                    cout<<"TRUE";
                    return 0;
                }
            } 
            else {
                cout<<"TRUE";
                return 0;
            }
        }
    }
    cout<<"FALSE";

    return 0;
}