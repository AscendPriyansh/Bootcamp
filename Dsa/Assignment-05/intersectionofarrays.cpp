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
        
        int m;
        cin>>m;
        
        vector<int> q(m);
        for(int i=0; i<m; i++) {
            cin>>q[i];
        }
        
        unordered_map<int, int> mpp;
        
        for(int i=0; i<m; i++) {
            mpp[q[i]]++;
        }
        
        vector<int> res;
        for(int i=0; i<n; i++) {
            if(mpp[v[i]]>0) {
                res.push_back(v[i]);
                mpp[v[i]]--;
            }
        }
    
        
        for(int i=0; i<res.size(); i++) {
            cout<<res[i]<<" ";
        }
        cout<<"\n";
    
    }

    return 0;
}