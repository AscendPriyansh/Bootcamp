#include<bits/stdc++.h>
using namespace std;

int main() {    
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    long long totalInv=0, maxInv=INT_MIN, minInv=INT_MAX, avgInv=0;
    for(int i=0; i<n; i++) {
        totalInv+=v[i];
        if(v[i]>maxInv) {
            maxInv = v[i];
        }
        if(v[i]<minInv) {
            minInv=v[i];
        }
    }
    cout<<totalInv<<" "<<maxInv<<" "<<minInv<<" "<<totalInv/n;

    return 0;
}