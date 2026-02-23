#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, x;
    cin>>n>>x;
    vector<long long> arr(n);
    for(long long i=0; i<n; i++) {
        cin>>arr[i];
    }

    long long count=0;
    for(long long i=0; i<n; i++) {
        if(arr[i]==x) {
            count++;
        }
    }

    cout<<count;

    return 0;
}