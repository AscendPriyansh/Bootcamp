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
        
        int count_triplet=0;
        
        for(int i=0; i<n; i++) {
            unordered_map<int, int> mpp;
            
            for(int j=i+1; j<n; j++) {
                int complement = k - v[i] - v[j];
                
                if(mpp.count(complement)) {
                    count_triplet+=mpp[complement];
                }
                
                mpp[v[j]]++;
            }
        }
        
        cout<<count_triplet<<"\n";
    }

    return 0;
}