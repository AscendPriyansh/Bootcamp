#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    
    long long and1 = v[0];
    long long or1 = v[0];
    long long xor1 = v[0];

    for(int i=1; i<n; i++) {
        and1 &= v[i];
        or1 |= v[i];
        xor1 ^= v[i];
    }

    cout<<and1<<" "<<or1<<" "<<xor1;

    return 0;
}