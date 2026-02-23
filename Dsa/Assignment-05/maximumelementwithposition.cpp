#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    vector<long long> arr(n);
    for(long long i=0; i<n; i++) {
        cin>>arr[i];
    }

    long long maxi = LLONG_MIN;
    long long index = -1;
    for(long long i=0; i<n; i++) {
        if(arr[i]>maxi) {
            maxi = arr[i];
            index = i;
        }
    }

    cout<<maxi<<" "<<index+1;

    return 0;
}