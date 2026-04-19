#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin>>n>>q;
    vector<long long> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    vector<int> que(q);
    for(int i=0; i<q; i++) {
        cin>>que[i];
    }

    map<long long, int> mpp;
    for(int i=0; i<n; i++) {
        mpp[v[i]]=i+1;
    }

    for(int i=0; i<q; i++) {
        if(mpp.find(que[i])!=mpp.end()) {
            cout<<mpp[que[i]]<<endl;
        }
        else {
            cout<<-1<<endl;
        }
    }

    return 0;
}