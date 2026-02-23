#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    vector<long long> arr(n);
    for(long long i=0; i<n; i++) {
        cin>>arr[i];
    }

    long long sum=0;

    for(long long i=0; i<n; i++) {
        sum+=arr[i];
    }

    cout<<sum;


    return 0;
}