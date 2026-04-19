#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    int q;
    cin>>q;
    vector<pair<int, int>> store(q);
    for(int i=0; i<q; i++) {
        int l, r;
        cin>>l>>r;
        store[i] = {l, r};
    }

    vector<long long> prefixSum;
    long long sum=0;
    for(int i=0; i<n; i++) {
        sum+=v[i];
        prefixSum.push_back(sum);
    }

    for(int i=0; i<q; i++) {
        if(store[i].first==1) cout<<prefixSum[(store[i].second)-1]<<endl;
        else cout<<prefixSum[(store[i].second)-1] - prefixSum[(store[i].first)-2]<<endl;
    }
    return 0;
}