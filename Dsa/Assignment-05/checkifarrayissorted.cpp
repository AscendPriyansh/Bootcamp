#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    vector<long long> arr(n);
    for(long long i=0; i<n; i++) {
        cin>>arr[i];
    }

    long long count=0;
    int flag=0;
    for(long long i=1; i<n; i++) {
        if(!(arr[i-1]<=arr[i])) {
            flag=1;
            cout<<"NO";
            break;
        }
    }

    if(flag==0) {
        cout<<"YES";
    }

    return 0;
}