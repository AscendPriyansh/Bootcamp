#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long x;
    cin>>n;
    vector<long long> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    cin>>x;

    for(int i=0; i<n; i++) {
        if(v[i]==x) {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";


    return 0;
}