#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(long long i=0; i<n; i++) {
        cin>>v[i];
    }

    for(long long i=1; i<n; i++) {
        if(v[i-1]!=v[i]) {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";


    return 0;
}