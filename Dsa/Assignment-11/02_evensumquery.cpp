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
    
    vector<long long> prefixEvenSum;
    long long sum=0;
    for(int i=0; i<n; i++) {
        if((i+1)%2==0) {
            sum+=v[i];
            prefixEvenSum.push_back(sum);
        }
        else {
            prefixEvenSum.push_back(sum);
        }
    }

    for(int i=0; i<q; i++) {
        int l,r;
        cin>>l>>r;
        if(l==1) cout<<prefixEvenSum[r-1]<<endl;
        else cout<<prefixEvenSum[r-1] - prefixEvenSum[l-2]<<endl;
    }

    return 0;
}