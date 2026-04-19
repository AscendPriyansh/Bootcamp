#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<char> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    int q;
    cin>>q;

    vector<int> prefixCountSum;
    int count=0;
    for(int i=0; i<n; i++) {
        if(v[i]=='a' || v[i]=='e' || v[i]=='i' || v[i]=='o' || v[i]=='u') {
            count++;
            prefixCountSum.push_back(count);
        }
        else {
            prefixCountSum.push_back(count);
        }
    }

    for(int i=0; i<q; i++) {
        int l, r;
        cin>>l>>r;
        if(l==1) cout<<prefixCountSum[r-1]<<endl;
        else cout<<prefixCountSum[r-1] - prefixCountSum[l-2]<<endl;
    }
    
    return 0;
}