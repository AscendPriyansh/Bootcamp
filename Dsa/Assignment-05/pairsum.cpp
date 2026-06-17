#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int n;
        cin>>n;
    
        vector<int> v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }
        
        int k;
        cin>>k;
        
        unordered_map<int, int> mpp;
        
        int count=0;
        for(int i=0; i<n; i++) {
            int complement = k - v[i];
            if(mpp.count(complement)) {
                count+=mpp[complement];
            }
            
            mpp[v[i]]++;
        }
    
        cout<<count<<"\n";
    }

    return 0;
}