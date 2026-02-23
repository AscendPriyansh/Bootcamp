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
        long long x;
        cin>>x;

        long long count=0;
        for(long long i=0; i<n-1; i++) {
            for(long long j=i+1; j<n; j++) {
                if(arr[i]+arr[j]==x) {
                    count++;
                }
            }
        }

        cout<<count<<endl;
    }

    return 0;
}