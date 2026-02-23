#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;

    while(test--) {
        long long n;
        cin>>n;
        vector<long long> arr(n);
        for(long long i=0; i<n; i++) {
            cin>>arr[i];
        }

        for(long long i=0; i<n-1; i+=2) {
            long long store = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = store;
        }

        for(long long i=0; i<n; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}