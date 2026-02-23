#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(long long i=0; i<n; i++) {
        cin>>v[i];
    }
    
    long long i;
    long long j;

    if(n%2==0) {
        i=(n/2)-1;
        j=n/2;
        while(i>=0 && j!=n) {
            cout<<v[i]<<" "<<v[j]<<" ";
            i--;
            j++;
        }
    }
    else {
        i=(n/2)-1;
        j=(n/2)+1;
        cout<<v[n/2]<<" ";
        while(i>=0 && j!=n) {
            cout<<v[i]<<" "<<v[j]<<" ";
            i--;
            j++;
        }
    }

    return 0;
}