#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, x;
    cin>>n>>x;
    vector<long long> arr(n);
    for(long long i=0; i<n; i++) {
        cin>>arr[i];
    }

    int flag=0;
    for(long long i=0; i<n; i++) {
        if(arr[i]==x) {
            flag=1;
            cout<<"YES";
            break;
        }
    }

    if(flag==0) {
        cout<<"NO";
    }

             

    return 0;
}