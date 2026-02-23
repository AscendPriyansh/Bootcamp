#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(long long i=0; i<n; i++) {
        cin>>v[i];
    }

    long long count=0;
    for(long long i=0; i<n; i++) {
        if(v[i]==0) {
            count++;
            continue;
        }
        if(18%v[i]==0 || v[i]%45==0) {
            count++;
        } 
    }

    cout<<count;
    

    return 0;
}