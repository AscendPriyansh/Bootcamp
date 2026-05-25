#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        vector<long long> a(n);
        vector<long long> b(n);
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }
        for(int i=0; i<n; i++) {
            cin>>b[i];
        }

        long long sum=0;
        long long maxi=INT_MIN;
        for(int i=0; i<n; i++) {
            sum+=max(a[i], b[i]);

            maxi = max(maxi, min(a[i], b[i]));
        }

        cout<<sum+maxi<<"\n";
    
    }

    return 0;
}