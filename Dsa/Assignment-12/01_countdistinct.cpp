#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    set<long long> s;
    for(int i=0; i<n; i++) {
        s.insert(v[i]);
    }

    cout<<s.size();

    return 0;
}