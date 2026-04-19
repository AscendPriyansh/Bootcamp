#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    long long total=0;
    for(int i=0; i<n; i++) {
        long long sum = 0;
        for(int j=i; j<n; j++) {
            sum+=v[j];
            total+=sum;
        }
    }

    cout<<total;

    return 0;
}