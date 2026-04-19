#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int q;
    cin>>q;
    vector<long long> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    
    vector<long long> prefixSquareSum;
    long long sum=0;
    for(int i=0; i<n; i++) {
        sum+=(v[i]*v[i]);
        prefixSquareSum.push_back(sum);
    }

    for(int i=0; i<q; i++) {
        int l,r;
        cin>>l>>r;
        if(l==1) cout<<prefixSquareSum[r-1]<<endl;
        else cout<<prefixSquareSum[r-1] - prefixSquareSum[l-2]<<endl;
    }

    return 0;
}